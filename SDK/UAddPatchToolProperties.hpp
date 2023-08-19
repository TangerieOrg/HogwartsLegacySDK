#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UAddPatchToolProperties : public UInteractiveToolPropertySet {
public:
    float Width; // 0x60
    float Rotation; // 0x64
    int32_t Subdivisions; // 0x68
    float Shift; // 0x6c
    static UAddPatchToolProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
