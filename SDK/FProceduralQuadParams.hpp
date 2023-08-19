#pragma once
#include <cstdint>
#include "FColor.hpp"
#pragma pack(push, 1)
struct FProceduralQuadParams {
    float XSize; // 0x0
    float YSize; // 0x4
    float DefaultZ; // 0x8
    float UVTiling; // 0xc
    bool bUseUVs; // 0x10
    bool bHasCollision; // 0x11
    char pad_12[0x2];
    FColor VertexColor; // 0x14
    bool bUseVertexColors; // 0x18
    bool bCreateNormals; // 0x19
    bool bCreateTangents; // 0x1a
    char pad_1b[0x1];
}; // Size: 0x1c
#pragma pack(pop)
