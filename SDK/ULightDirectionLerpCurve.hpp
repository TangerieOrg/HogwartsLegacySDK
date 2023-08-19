#pragma once
#include <cstdint>
#include "ULightDirectionLerpControl.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class ULightDirectionLerpCurve : public ULightDirectionLerpControl {
public:
    UCurveFloat* Curve; // 0x30
    static ULightDirectionLerpCurve* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
