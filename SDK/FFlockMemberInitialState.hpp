#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FFlockMemberInitialState {
    FQuat Rotation; // 0x0
    FVector Position; // 0x10
    FVector Velocity; // 0x1c
    float Scale; // 0x28
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
