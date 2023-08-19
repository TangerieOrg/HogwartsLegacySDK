#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UARTrackedGeometry.hpp"
class UAREnvironmentCaptureProbeTexture;
#pragma pack(push, 1)
class UAREnvironmentCaptureProbe : public UARTrackedGeometry {
public:
    char pad_100[0x8];
    UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x108
    static UAREnvironmentCaptureProbe* StaticClass();
    FVector GetExtent();
    UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
}; // Size: 0x110
#pragma pack(pop)
