#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FProcMeshTangent.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FProcMeshVertex {
    FVector Position; // 0x0
    FVector Normal; // 0xc
    FProcMeshTangent Tangent; // 0x18
    FColor Color; // 0x28
    FVector2D UV0; // 0x2c
    FVector2D UV1; // 0x34
    FVector2D UV2; // 0x3c
    FVector2D UV3; // 0x44
}; // Size: 0x4c
#pragma pack(pop)
