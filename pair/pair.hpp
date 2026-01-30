#pragma once
#include <iostream>

template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;

    Pair() : first(T1()), second(T2()) {}
    Pair(const T1& a, const T2& b) : first(a), second(b) {}
    Pair(T1&& a, T2&& b) : first(std::move(a)), second(std::move(b)) {}

    Pair(const Pair& other) : first(other.first), second(other.second) {}
    Pair(Pair&& other) noexcept
        : first(std::move(other.first)),
          second(std::move(other.second)) {}

    Pair& operator=(const Pair& other) {
        if (this != &other) {
            first = other.first;
            second = other.second;
        }
        return *this;
    }

    bool operator<(const Pair& other) const {
        if (first < other.first) return true;
        if (other.first < first) return false;
        return second < other.second;
    }

    bool operator==(const Pair& other) const {
        return first == other.first && second == other.second;
    }

    bool operator!=(const Pair& other) const {
        return !(*this == other);
    }

    Pair operator+(const Pair& other) const {
        return Pair(first + other.first, second + other.second);
    }
};