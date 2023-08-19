#pragma once
#include <cstdint>
#include "EGlobalLightRigModColorConversionType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "UGlobalLightRigModFloatBase.hpp"
class UGlobalLightRigModOption;
#pragma pack(push, 1)
class UGlobalLightRigModFloatConstantNew : public UGlobalLightRigModFloatBase {
public:
    EGlobalLightRigModParam Param; // 0x28
    char pad_29[0x3];
    float Value; // 0x2c
    TArray<UGlobalLightRigModOption*> Modifiers; // 0x30
    EGlobalLightRigModColorConversionType ColorConversion; // 0x40
    char pad_41[0x7];
    static UGlobalLightRigModFloatConstantNew* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
