#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UIterativeSmoothProperties : public UInteractiveToolPropertySet {
public:
    float SmoothingPerStep; // 0x60
    int32_t Steps; // 0x64
    bool bSmoothBoundary; // 0x68
    char pad_69[0x7];
    static UIterativeSmoothProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
