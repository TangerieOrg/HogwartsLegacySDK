#pragma once
#include <cstdint>
#include "FGlobalLightingSunColorParams.hpp"
#include "ULightSettingsModColorBase.hpp"
#pragma pack(push, 1)
class ULightSettingsModSunColor : public ULightSettingsModColorBase {
public:
    FGlobalLightingSunColorParams Params; // 0x30
    char pad_54[0x4];
    static ULightSettingsModSunColor* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
