#pragma once
#include <cstdint>
class ULumosScalabilityAsset;
#pragma pack(push, 1)
struct FLumosScalabilitySettingsQuality {
    ULumosScalabilityAsset* Low; // 0x0
    ULumosScalabilityAsset* Medium; // 0x8
    ULumosScalabilityAsset* High; // 0x10
    ULumosScalabilityAsset* Epic; // 0x18
    ULumosScalabilityAsset* Cinematic; // 0x20
}; // Size: 0x28
#pragma pack(pop)
