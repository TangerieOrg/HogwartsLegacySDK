#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FTesselatedPlaneParams {
    float XSize; // 0x0
    float YSize; // 0x4
    float VertSpacing; // 0x8
    float DefaultZ; // 0xc
    float UVTiling; // 0x10
    bool bUseUVs; // 0x14
    bool bHasCollision; // 0x15
    char pad_16[0x2];
    FLinearColor VertexColor; // 0x18
    bool bUseVertexColors; // 0x28
    bool bCreateNormals; // 0x29
    bool bCreateTangents; // 0x2a
    char pad_2b[0x1];
}; // Size: 0x2c
#pragma pack(pop)
