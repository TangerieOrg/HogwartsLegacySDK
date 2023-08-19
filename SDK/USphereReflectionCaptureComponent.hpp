#pragma once
#include <cstdint>
#include "UReflectionCaptureComponent.hpp"
class UDrawSphereComponent;
#pragma pack(push, 1)
class USphereReflectionCaptureComponent : public UReflectionCaptureComponent {
public:
    UDrawSphereComponent* PreviewInfluenceRadius; // 0x2b0
    char pad_2b8[0x8];
    static USphereReflectionCaptureComponent* StaticClass();
}; // Size: 0x2c0
#pragma pack(pop)
