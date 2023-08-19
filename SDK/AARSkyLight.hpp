#pragma once
#include <cstdint>
#include "ASkyLight.hpp"
class UAREnvironmentCaptureProbe;
#pragma pack(push, 1)
class AARSkyLight : public ASkyLight {
public:
    UAREnvironmentCaptureProbe* CaptureProbe; // 0x258
    char pad_260[0x8];
    static AARSkyLight* StaticClass();
    void SetEnvironmentCaptureProbe(UAREnvironmentCaptureProbe* InCaptureProbe);
}; // Size: 0x268
#pragma pack(pop)
