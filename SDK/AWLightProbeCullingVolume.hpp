#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "EWCullingVolumeAreaType.hpp"
#include "EWCullingVolumeRemoveType.hpp"
#pragma pack(push, 1)
class AWLightProbeCullingVolume : public AVolume {
public:
    bool bWhitelistOnly; // 0x280
    char pad_281[0x3];
    EWCullingVolumeAreaType CullType; // 0x284
    EWCullingVolumeRemoveType RemoveType; // 0x288
    char pad_28c[0x4];
    static AWLightProbeCullingVolume* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
