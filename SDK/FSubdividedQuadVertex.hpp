#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FSubdividedQuadVertex {
    int32_t VertexPositionIndex; // 0x0
    FVector2D TextureCoordinate0; // 0x4
    FVector2D TextureCoordinate1; // 0xc
    FColor VertexColor; // 0x14
    FVector VertexNormal; // 0x18
    FVector VertexTangent; // 0x24
    float VertexBinormalSign; // 0x30
}; // Size: 0x34
#pragma pack(pop)
