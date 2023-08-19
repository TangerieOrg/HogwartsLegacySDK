#pragma once
#include <cstdint>
#include "UReflectionCaptureComponent.hpp"
class UBoxComponent;
#pragma pack(push, 1)
class UBoxReflectionCaptureComponent : public UReflectionCaptureComponent {
public:
    UBoxComponent* PreviewInfluenceBox; // 0x2b0
    UBoxComponent* PreviewCaptureBox; // 0x2b8
    static UBoxReflectionCaptureComponent* StaticClass();
}; // Size: 0x2c0
#pragma pack(pop)
