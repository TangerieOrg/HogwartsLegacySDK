#pragma once
#include <cstdint>
#include "EGlobalLightRigModLinearColorType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "FLinearColor.hpp"
#include "UGlobalLightRigModColorBase.hpp"
class UGlobalLightRigModOption;
#pragma pack(push, 1)
class UGlobalLightRigModColorConstantNew : public UGlobalLightRigModColorBase {
public:
    EGlobalLightRigModParam Param; // 0x28
    char pad_29[0x3];
    FLinearColor Color; // 0x2c
    EGlobalLightRigModLinearColorType ColorType; // 0x3c
    char pad_3d[0x3];
    TArray<UGlobalLightRigModOption*> Modifiers; // 0x40
    static UGlobalLightRigModColorConstantNew* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
