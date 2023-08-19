#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FSplineMeshParams {
    FVector StartPos; // 0x0
    FVector StartTangent; // 0xc
    FVector2D StartScale; // 0x18
    float StartRoll; // 0x20
    FVector2D StartOffset; // 0x24
    FVector EndPos; // 0x2c
    FVector2D EndScale; // 0x38
    FVector EndTangent; // 0x40
    float EndRoll; // 0x4c
    FVector2D EndOffset; // 0x50
}; // Size: 0x58
#pragma pack(pop)
