#pragma once
#include <cstdint>
#include "FGlobalLightingSunColorParams.hpp"
#include "ULightSettingsModFloatBase.hpp"
#pragma pack(push, 1)
class ULightSettingsModSunLuminance : public ULightSettingsModFloatBase {
public:
    FGlobalLightingSunColorParams Params; // 0x38
    char pad_5c[0x4];
    static ULightSettingsModSunLuminance* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
