#pragma once
#include <cstdint>
#include "EGlobalLightRigModColorConversionType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "FGlobalLightRigWorldModDriverName.hpp"
#include "UGlobalLightRigModFloatBase.hpp"
class UCurveFloat;
class UGlobalLightRigModOption;
#pragma pack(push, 1)
class UGlobalLightRigModFloatCurveNew : public UGlobalLightRigModFloatBase {
public:
    EGlobalLightRigModParam Param; // 0x28
    char pad_29[0x3];
    FGlobalLightRigWorldModDriverName Source; // 0x2c
    char pad_34[0x4];
    UCurveFloat* Curve; // 0x38
    TArray<UGlobalLightRigModOption*> Modifiers; // 0x40
    EGlobalLightRigModColorConversionType ColorConversion; // 0x50
    char pad_51[0x7];
    static UGlobalLightRigModFloatCurveNew* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
