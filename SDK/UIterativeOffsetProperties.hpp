#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UIterativeOffsetProperties : public UInteractiveToolPropertySet {
public:
    int32_t Steps; // 0x60
    bool bOffsetBoundaries; // 0x64
    char pad_65[0x3];
    float SmoothingPerStep; // 0x68
    bool bReprojectSmooth; // 0x6c
    char pad_6d[0x3];
    static UIterativeOffsetProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
