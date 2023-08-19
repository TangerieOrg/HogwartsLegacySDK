#pragma once
#include <cstdint>
#include "UAblCollisionFilter.hpp"
#pragma pack(push, 1)
class UAblCollisionFilterOwner : public UAblCollisionFilter {
public:
    static UAblCollisionFilterOwner* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
