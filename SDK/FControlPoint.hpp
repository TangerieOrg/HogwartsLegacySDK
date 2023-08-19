#pragma once
#include <cstdint>
#include "FVector4.hpp"
#pragma pack(push, 1)
struct FControlPoint {
    FVector4 Position; // 0x0
    FVector4 Normal; // 0x10
    FVector4 ArriveTangent; // 0x20
    FVector4 LeaveTangent; // 0x30
}; // Size: 0x40
#pragma pack(pop)
