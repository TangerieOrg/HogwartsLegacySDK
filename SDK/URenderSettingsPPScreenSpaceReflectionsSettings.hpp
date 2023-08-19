#pragma once
#include <cstdint>
#include "FRenderSettingsPPScreenSpaceReflections.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class URenderSettingsPPScreenSpaceReflectionsSettings : public UDataAsset {
public:
    TArray<FRenderSettingsPPScreenSpaceReflections> Settings; // 0x30
    static URenderSettingsPPScreenSpaceReflectionsSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
