#pragma once
#include <cstdint>
#include "UAnimatedLightComponentBase.hpp"
class UAnimatedLightSettingsAsset;
#pragma pack(push, 1)
class UAnimatedLightComponentLean : public UAnimatedLightComponentBase {
public:
    UAnimatedLightSettingsAsset* Settings; // 0x260
    char pad_268[0x8];
    static UAnimatedLightComponentLean* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
