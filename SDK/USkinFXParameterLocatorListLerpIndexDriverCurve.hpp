#pragma once
#include <cstdint>
#include "USkinFXParameterLocatorListLerpIndexDriver.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class USkinFXParameterLocatorListLerpIndexDriverCurve : public USkinFXParameterLocatorListLerpIndexDriver {
public:
    UCurveFloat* Curve; // 0x28
    bool bHermite; // 0x30
    char pad_31[0x7];
    static USkinFXParameterLocatorListLerpIndexDriverCurve* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
