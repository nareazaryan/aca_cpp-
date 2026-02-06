//98: Իմպլեմենտցնել մեր իսկ unique_ptr-ն
#include <iostream>

template<typename T>
class UniquePtr {
private:
    T* ptr; 
public:
    explicit UniquePtr(T* p = nullptr) : ptr(p) {}
    ~UniquePtr() { delete ptr; }
    UniquePtr(const UniquePtr&) = delete; 
    UniquePtr& operator=(const UniquePtr&) = delete;
    UniquePtr(UniquePtr&& other) noexcept : ptr(other.ptr) { 
        other.ptr = nullptr;
    }
    UniquePtr& operator=(UniquePtr&& other) noexcept { 
        if (this != &other) {
            delete ptr; 
            ptr = other.ptr; 
            other.ptr = nullptr; 
        }
        return *this;
    }
    T& operator*() { return *ptr; }
    T* operator->() { return ptr; }
    T* get() const { return ptr; }
    void reset(T* p = nullptr) { 
        delete ptr;
        ptr = p;
    }
    T* clear() { 
        T* temp = ptr;
        ptr = nullptr;
        return temp;
    }
};

int main() {
    UniquePtr<int> up1(new int(5));
    std::cout << *up1 << std::endl;

    UniquePtr<int> up2 = std::move(up1);
    std::cout << *up2 << std::endl; 
    if (up1.get() == nullptr) {
        std::cout << "up1 is now empty." << std::endl; 
    }

    return 0;
}