#pragma once
#include <cstdint>
#include "ELightRigCurveColorConversionType.hpp"
#include "ULightSettingsModCurve.hpp"
#pragma pack(push, 1)
class ULightSettingsModFloatBase : public ULightSettingsModCurve {
public:
    ELightRigCurveColorConversionType ColorConversion; // 0x30
    char pad_31[0x7];
    static ULightSettingsModFloatBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
