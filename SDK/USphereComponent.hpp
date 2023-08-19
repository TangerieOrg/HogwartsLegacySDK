#pragma once
#include <cstdint>
#include "UShapeComponent.hpp"
#pragma pack(push, 1)
class USphereComponent : public UShapeComponent {
public:
    static USphereComponent* StaticClass();
    void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);
    float GetUnscaledSphereRadius();
    float GetShapeScale();
    float GetScaledSphereRadius();
}; // Size: 0x4a0
#pragma pack(pop)
