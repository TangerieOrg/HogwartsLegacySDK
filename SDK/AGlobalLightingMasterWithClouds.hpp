#pragma once
#include <cstdint>
#include "AGlobalLightingMaster.hpp"
class URenderSettingsBlendDomainAsset;
class UVolumetricCloudsComponent;
#pragma pack(push, 1)
class AGlobalLightingMasterWithClouds : public AGlobalLightingMaster {
public:
    URenderSettingsBlendDomainAsset* VisibilityBlendDomain; // 0x1410
    float VisibilityBlendDomainThreshold; // 0x1418
    char pad_141c[0x4];
    UVolumetricCloudsComponent* VolumetricCloudsComponent; // 0x1420
    char pad_1428[0x8];
    static AGlobalLightingMasterWithClouds* StaticClass();
}; // Size: 0x1430
#pragma pack(pop)
