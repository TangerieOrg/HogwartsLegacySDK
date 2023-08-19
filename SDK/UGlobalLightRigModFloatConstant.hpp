#pragma once
#include <cstdint>
#include "EGlobalLightRigModColorConversionType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "EGlobalLightRigModType.hpp"
#include "EGlobalLightRigProbeMode.hpp"
#include "UGlobalLightRigModFloatBase.hpp"
#pragma pack(push, 1)
class UGlobalLightRigModFloatConstant : public UGlobalLightRigModFloatBase {
public:
    EGlobalLightRigModParam Param; // 0x28
    char pad_29[0x3];
    float Value; // 0x2c
    EGlobalLightRigModColorConversionType ColorConversion; // 0x30
    EGlobalLightRigModType Type; // 0x31
    EGlobalLightRigProbeMode Mode; // 0x32
    bool bEnabled; // 0x33
    char pad_34[0x4];
    static UGlobalLightRigModFloatConstant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
