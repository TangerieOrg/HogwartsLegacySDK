#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FLevelViewportInfo {
    FVector CamPosition; // 0x0
    FRotator CamRotation; // 0xc
    float CamOrthoZoom; // 0x18
    bool CamUpdated; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
