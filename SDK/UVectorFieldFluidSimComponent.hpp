#pragma once
#include <cstdint>
#include "UVectorFieldComponent.hpp"
class UVectorFieldFluidSim;
#pragma pack(push, 1)
class UVectorFieldFluidSimComponent : public UVectorFieldComponent {
public:
    char pad_4b0[0x40];
    UVectorFieldFluidSim* FluidSimVectorField; // 0x4f0
    char pad_4f8[0x8];
    static UVectorFieldFluidSimComponent* StaticClass();
}; // Size: 0x500
#pragma pack(pop)
