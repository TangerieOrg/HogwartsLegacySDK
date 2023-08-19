#pragma once
#include <cstdint>
#include "EGlobalLightRigModLinearColorType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "FGlobalLightRigWorldModDriverName.hpp"
#include "UGlobalLightRigModColorBase.hpp"
class UCurveLinearColor;
class UGlobalLightRigModOption;
#pragma pack(push, 1)
class UGlobalLightRigModColorCurveNew : public UGlobalLightRigModColorBase {
public:
    EGlobalLightRigModParam Param; // 0x28
    char pad_29[0x3];
    FGlobalLightRigWorldModDriverName Source; // 0x2c
    char pad_34[0x4];
    UCurveLinearColor* Curve; // 0x38
    EGlobalLightRigModLinearColorType ColorType; // 0x40
    char pad_41[0x7];
    TArray<UGlobalLightRigModOption*> Modifiers; // 0x48
    static UGlobalLightRigModColorCurveNew* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
