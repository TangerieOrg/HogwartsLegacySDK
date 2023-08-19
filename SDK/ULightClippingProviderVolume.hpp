#pragma once
#include <cstdint>
#include "ELightClippingProviderVolumeMode.hpp"
#include "ULightClippingProvider.hpp"
class ALightClippingVolume;
#pragma pack(push, 1)
class ULightClippingProviderVolume : public ULightClippingProvider {
public:
    ALightClippingVolume* LightClippingVolume; // 0x28
    ELightClippingProviderVolumeMode Mode; // 0x30
    char pad_31[0x7];
    static ULightClippingProviderVolume* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
