#pragma once
#include <cstdint>
#include "UVectorField.hpp"
#pragma pack(push, 1)
class UVectorFieldFluidSim : public UVectorField {
public:
    int32_t SizeX; // 0x48
    int32_t SizeY; // 0x4c
    int32_t SizeZ; // 0x50
    char pad_54[0xc];
    static UVectorFieldFluidSim* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
