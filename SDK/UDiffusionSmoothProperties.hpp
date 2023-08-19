#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UDiffusionSmoothProperties : public UInteractiveToolPropertySet {
public:
    float SmoothingPerStep; // 0x60
    int32_t Steps; // 0x64
    bool bPreserveUVs; // 0x68
    char pad_69[0x7];
    static UDiffusionSmoothProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
