#pragma once
#include <cstdint>
#include "FRenderSettingsPPMotionBlur.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class URenderSettingsPPMotionBlurSettings : public UDataAsset {
public:
    TArray<FRenderSettingsPPMotionBlur> Settings; // 0x30
    static URenderSettingsPPMotionBlurSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
