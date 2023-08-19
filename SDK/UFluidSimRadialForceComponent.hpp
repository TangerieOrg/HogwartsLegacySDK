#pragma once
#include <cstdint>
#include "USphereComponent.hpp"
#pragma pack(push, 1)
class UFluidSimRadialForceComponent : public USphereComponent {
public:
    float Force; // 0x4a0
    char pad_4a4[0xc];
    static UFluidSimRadialForceComponent* StaticClass();
    void SetRadialForce(float ForceIn);
    float GetRadialForce();
}; // Size: 0x4b0
#pragma pack(pop)
