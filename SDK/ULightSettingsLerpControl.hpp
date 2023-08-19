#pragma once
#include <cstdint>
#include "EGlobalLightRigModParam.hpp"
#include "ELightRigCurveParam.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class ULightSettingsLerpControl : public UObject {
public:
    EGlobalLightRigModParam ModParam; // 0x28
    ELightRigCurveParam Param; // 0x29
    bool bEnabled; // 0x2a
    char pad_2b[0x5];
    static ULightSettingsLerpControl* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
