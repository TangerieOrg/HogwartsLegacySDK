#pragma once
#include <cstdint>
#include "ELightRigCurveLinearColorType.hpp"
#include "ULightSettingsModColorBase.hpp"
class UCurveLinearColor;
#pragma pack(push, 1)
class ULightSettingsModColorCurve : public ULightSettingsModColorBase {
public:
    UCurveLinearColor* Curve; // 0x30
    ELightRigCurveLinearColorType ColorType; // 0x38
    char pad_39[0x7];
    static ULightSettingsModColorCurve* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
