#pragma once
#include <cstdint>
#include "EGlobalLightRigModColorConversionType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "EGlobalLightRigModType.hpp"
#include "EGlobalLightRigProbeMode.hpp"
#include "FGlobalLightRigWorldModDriverName.hpp"
#include "UGlobalLightRigModFloatBase.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UGlobalLightRigModFloatCurve : public UGlobalLightRigModFloatBase {
public:
    EGlobalLightRigModParam Param; // 0x28
    char pad_29[0x3];
    FGlobalLightRigWorldModDriverName Source; // 0x2c
    char pad_34[0x4];
    UCurveFloat* Curve; // 0x38
    EGlobalLightRigModColorConversionType ColorConversion; // 0x40
    EGlobalLightRigModType Type; // 0x41
    EGlobalLightRigProbeMode Mode; // 0x42
    bool bEnabled; // 0x43
    char pad_44[0x4];
    static UGlobalLightRigModFloatCurve* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
