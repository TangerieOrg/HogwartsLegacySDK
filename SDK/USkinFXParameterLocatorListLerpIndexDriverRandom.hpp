#pragma once
#include <cstdint>
#include "USkinFXParameterLocatorListLerpIndexDriver.hpp"
#pragma pack(push, 1)
class USkinFXParameterLocatorListLerpIndexDriverRandom : public USkinFXParameterLocatorListLerpIndexDriver {
public:
    float MinTimeBetweenChanges; // 0x28
    float MaxTimeBetweenChanges; // 0x2c
    bool bSmooth; // 0x30
    bool bHermite; // 0x31
    char pad_32[0x6];
    static USkinFXParameterLocatorListLerpIndexDriverRandom* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
