#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_IsMounted : public UFXFilter {
public:
    static UFXFilter_IsMounted* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
