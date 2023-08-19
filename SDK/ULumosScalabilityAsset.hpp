#pragma once
#include <cstdint>
#include "FLumosScalabilitySettings.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class ULumosScalabilityAsset : public UDataAsset {
public:
    FLumosScalabilitySettings Settings; // 0x30
    static ULumosScalabilityAsset* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
