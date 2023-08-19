#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UImplicitSmoothProperties : public UInteractiveToolPropertySet {
public:
    float SmoothSpeed; // 0x60
    float Smoothness; // 0x64
    bool bPreserveUVs; // 0x68
    char pad_69[0x3];
    float VolumeCorrection; // 0x6c
    static UImplicitSmoothProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
