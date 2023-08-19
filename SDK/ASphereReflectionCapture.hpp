#pragma once
#include <cstdint>
#include "AReflectionCapture.hpp"
class UDrawSphereComponent;
#pragma pack(push, 1)
class ASphereReflectionCapture : public AReflectionCapture {
public:
    UDrawSphereComponent* DrawCaptureRadius; // 0x250
    static ASphereReflectionCapture* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
