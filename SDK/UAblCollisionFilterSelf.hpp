#pragma once
#include <cstdint>
#include "UAblCollisionFilter.hpp"
#pragma pack(push, 1)
class UAblCollisionFilterSelf : public UAblCollisionFilter {
public:
    static UAblCollisionFilterSelf* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
