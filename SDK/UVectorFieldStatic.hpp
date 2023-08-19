#pragma once
#include <cstdint>
#include "UVectorField.hpp"
#pragma pack(push, 1)
class UVectorFieldStatic : public UVectorField {
public:
    int32_t SizeX; // 0x48
    int32_t SizeY; // 0x4c
    int32_t SizeZ; // 0x50
    bool bAllowCPUAccess; // 0x54
    char pad_55[0x43];
    static UVectorFieldStatic* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
