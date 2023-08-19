#pragma once
#include <cstdint>
#include "EGlobalLightRigModLinearColorType.hpp"
#include "EGlobalLightRigModParam.hpp"
#include "EGlobalLightRigModType.hpp"
#include "EGlobalLightRigProbeMode.hpp"
#include "FLinearColor.hpp"
#include "UGlobalLightRigModColorBase.hpp"
#pragma pack(push, 1)
class UGlobalLightRigModColorConstant : public UGlobalLightRigModColorBase {
public:
    EGlobalLightRigModParam Param; // 0x28
    char pad_29[0x3];
    FLinearColor Color; // 0x2c
    EGlobalLightRigModLinearColorType ColorType; // 0x3c
    EGlobalLightRigModType Type; // 0x3d
    EGlobalLightRigProbeMode Mode; // 0x3e
    bool bEnabled; // 0x3f
    static UGlobalLightRigModColorConstant* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
