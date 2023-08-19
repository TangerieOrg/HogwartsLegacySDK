#pragma once
#include <cstdint>
#include "ULightSettingsModCurve.hpp"
#pragma pack(push, 1)
class ULightSettingsModColorBase : public ULightSettingsModCurve {
public:
    static ULightSettingsModColorBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
