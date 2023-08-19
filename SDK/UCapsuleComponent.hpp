#pragma once
#include <cstdint>
#include "UShapeComponent.hpp"
#pragma pack(push, 1)
class UCapsuleComponent : public UShapeComponent {
public:
    static UCapsuleComponent* StaticClass();
    void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);
    void SetCapsuleRadius(float Radius, bool bUpdateOverlaps);
    void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);
    void GetUnscaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere);
    void GetUnscaledCapsuleSize(float& OutRadius, float& OutHalfHeight);
    float GetUnscaledCapsuleRadius();
    float GetUnscaledCapsuleHalfHeight_WithoutHemisphere();
    float GetUnscaledCapsuleHalfHeight();
    float GetShapeScale();
    void GetScaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere);
    void GetScaledCapsuleSize(float& OutRadius, float& OutHalfHeight);
    float GetScaledCapsuleRadius();
    float GetScaledCapsuleHalfHeight_WithoutHemisphere();
    float GetScaledCapsuleHalfHeight();
}; // Size: 0x4a0
#pragma pack(pop)
