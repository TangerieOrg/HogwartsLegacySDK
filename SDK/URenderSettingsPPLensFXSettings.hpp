#pragma once
#include <cstdint>
#include "FRenderSettingsPPLensFX.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class URenderSettingsPPLensFXSettings : public UDataAsset {
public:
    TArray<FRenderSettingsPPLensFX> Settings; // 0x30
    static URenderSettingsPPLensFXSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
