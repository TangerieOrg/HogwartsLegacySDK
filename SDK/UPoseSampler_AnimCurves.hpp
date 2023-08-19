#pragma once
#include <cstdint>
#include "UPoseSampler.hpp"
#pragma pack(push, 1)
class UPoseSampler_AnimCurves : public UPoseSampler {
public:
    char pad_28[0x8];
    int32_t LODThreshold; // 0x30
    char pad_34[0x24];
    static UPoseSampler_AnimCurves* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
