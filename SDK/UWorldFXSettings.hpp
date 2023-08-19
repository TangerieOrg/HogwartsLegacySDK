#pragma once
#include <cstdint>
#include "FWorldFXPerWorldSettings.hpp"
#include "FWorldFXPresets.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UWorldFXSettings : public UDataAsset {
public:
    FWorldFXPerWorldSettings Defaults; // 0x30
    char pad_50[0x50];
    FWorldFXPresets Presets; // 0xa0
    static UWorldFXSettings* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
