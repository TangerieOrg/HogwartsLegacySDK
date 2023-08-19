#pragma once
#include <cstdint>
#include "FLerpVolumeInfo.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FLerpVolumeInterpolantInfo {
    char pad_0[0x8];
    FLerpVolumeInfo Volume; // 0x8
    FVector Pos; // 0x48
    float Depth; // 0x54
    float DepthBlend; // 0x58
    float DomainWeightBlend; // 0x5c
    float FinalBlend; // 0x60
    bool bIsCamera; // 0x64
    char pad_65[0x3];
}; // Size: 0x68
#pragma pack(pop)
