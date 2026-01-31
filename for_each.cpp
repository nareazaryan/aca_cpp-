#include <iostream>
#include <vector>

template< typename T,typename func>
void custom_for_each(const std::vector<T>& v, func f){
    for(size_t i = 0; i< v.size() ; i++){
        f(v[i]);
    }
}

int main() {

    std::vector<int> v = {1, 2, 3, 4, 5};

    custom_for_each(v, [](int x) {
        std:: cout << x << " " ;
    });

    std::cout << std::endl;
    return 0;

}