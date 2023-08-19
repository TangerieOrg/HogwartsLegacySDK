#pragma once
#include <cstdint>
#include "UAnimatedLightClusterComponentAuto.hpp"
#pragma pack(push, 1)
class UDayNightLightControllerComponent : public UAnimatedLightClusterComponentAuto {
public:
    float UpdateThresholdDegrees; // 0x250
    bool bEnabled; // 0x254
    bool bDeepScanChildren; // 0x255
    char pad_256[0x2];
    float LastSunAngleUpdate; // 0x258
    char pad_25c[0x24];
    static UDayNightLightControllerComponent* StaticClass();
    void IsLightControllerEnabled(bool& bIsControllerEnabled);
    void EnableLightController(bool bEnableController);
}; // Size: 0x280
#pragma pack(pop)
