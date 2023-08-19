#pragma once
#include <cstdint>
#include "ULightSettingsModFloatBase.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class ULightSettingsModFloatCurve : public ULightSettingsModFloatBase {
public:
    UCurveFloat* Curve; // 0x38
    static ULightSettingsModFloatCurve* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
