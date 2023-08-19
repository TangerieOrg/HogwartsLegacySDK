#pragma once
#include <cstdint>
#include "APostProcessVolume.hpp"
#include "FBlendDomain.hpp"
#pragma pack(push, 1)
class APostProcessVolumeWithBlendDomain : public APostProcessVolume {
public:
    FBlendDomain BlendDomain; // 0x890
    char pad_8c8[0x8];
    static APostProcessVolumeWithBlendDomain* StaticClass();
    void CopySettings();
}; // Size: 0x8d0
#pragma pack(pop)
