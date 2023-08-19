#pragma once
#include <cstdint>
#include "UReflectionCaptureComponent.hpp"
class UDrawSphereComponent;
class UBoxComponent;
#pragma pack(push, 1)
class UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent {
public:
    UDrawSphereComponent* PreviewInfluenceRadius; // 0x2b0
    UBoxComponent* PreviewCaptureBox; // 0x2b8
    static UPlaneReflectionCaptureComponent* StaticClass();
}; // Size: 0x2c0
#pragma pack(pop)
