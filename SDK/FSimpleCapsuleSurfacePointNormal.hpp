#pragma once
#include <cstdint>
#include "FSimpleCapsule.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSimpleCapsuleSurfacePointNormal : public FSimpleCapsule {
    FVector Point; // 0x20
    FVector Normal; // 0x2c
}; // Size: 0x38
#pragma pack(pop)
