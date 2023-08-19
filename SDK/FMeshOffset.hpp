#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMeshOffset {
    FVector Position; // 0x0
    float Yaw; // 0xc
}; // Size: 0x10
#pragma pack(pop)
