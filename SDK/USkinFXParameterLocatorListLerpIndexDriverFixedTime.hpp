#pragma once
#include <cstdint>
#include "USkinFXParameterLocatorListLerpIndexDriver.hpp"
#pragma pack(push, 1)
class USkinFXParameterLocatorListLerpIndexDriverFixedTime : public USkinFXParameterLocatorListLerpIndexDriver {
public:
    float TotalLerpTime; // 0x28
    bool bLooped; // 0x2c
    bool bHermite; // 0x2d
    char pad_2e[0x2];
    static USkinFXParameterLocatorListLerpIndexDriverFixedTime* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
