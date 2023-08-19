#pragma once
#include <cstdint>
#include "UObject.hpp"
class UAnimatedLightPluginSettings;
#pragma pack(push, 1)
class UAnimatedLightWorldData : public UObject {
public:
    UAnimatedLightPluginSettings* Settings; // 0x28
    char pad_30[0xf0];
    static UAnimatedLightWorldData* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
