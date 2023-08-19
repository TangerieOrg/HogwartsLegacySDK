#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_IsBroken : public UFXFilter {
public:
    static UFXFilter_IsBroken* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
