#pragma once
#include <cstdint>
#include "UGlobalLightRigModLerpControl.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UGlobalLightRigModLerpCurve : public UGlobalLightRigModLerpControl {
public:
    UCurveFloat* Curve; // 0x30
    static UGlobalLightRigModLerpCurve* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
