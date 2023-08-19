#pragma once
#include <cstdint>
#include "ELightClippingProviderInsideVolumeMode.hpp"
#include "ULightClippingProvider.hpp"
class AInsideVolume;
#pragma pack(push, 1)
class ULightClippingProviderInsideVolume : public ULightClippingProvider {
public:
    AInsideVolume* InsideVolume; // 0x28
    ELightClippingProviderInsideVolumeMode Mode; // 0x30
    char pad_31[0x7];
    static ULightClippingProviderInsideVolume* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
