#pragma once
#include <cstdint>
#include "ULightSettingsLerpControl.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class ULightSettingsLerpCurve : public ULightSettingsLerpControl {
public:
    UCurveFloat* Curve; // 0x30
    static ULightSettingsLerpCurve* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
