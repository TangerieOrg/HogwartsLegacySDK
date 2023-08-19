#pragma once
#include <cstdint>
#include "EGlobalLightRigModLinearColorType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "EGlobalLightRigModType.hpp"
#include "EGlobalLightRigProbeMode.hpp"
#include "FGlobalLightRigWorldModDriverName.hpp"
#include "UGlobalLightRigModColorBase.hpp"
class UCurveLinearColor;
#pragma pack(push, 1)
class UGlobalLightRigModColorCurve : public UGlobalLightRigModColorBase {
public:
    EGlobalLightRigModParam Param; // 0x28
    char pad_29[0x3];
    FGlobalLightRigWorldModDriverName Source; // 0x2c
    char pad_34[0x4];
    UCurveLinearColor* Curve; // 0x38
    EGlobalLightRigModLinearColorType ColorType; // 0x40
    EGlobalLightRigModType Type; // 0x41
    EGlobalLightRigProbeMode Mode; // 0x42
    bool bEnabled; // 0x43
    char pad_44[0x4];
    static UGlobalLightRigModColorCurve* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
