#pragma once
#include <cstdint>
#include "EGlobalLightRigModParam.hpp"
#include "ELightRigCurveParam.hpp"
#include "ELightRigCurveType.hpp"
#include "ELightRigMode.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class ULightSettingsModCurve : public UObject {
public:
    EGlobalLightRigModParam ModParam; // 0x28
    ELightRigCurveParam Param; // 0x29
    ELightRigMode Mode; // 0x2a
    ELightRigCurveType Type; // 0x2b
    bool bEnabled; // 0x2c
    char pad_2d[0x3];
    static ULightSettingsModCurve* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
