#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UPlaneCutToolProperties : public UInteractiveToolPropertySet {
public:
    bool bSnapToWorldGrid; // 0x60
    bool bKeepBothHalves; // 0x61
    char pad_62[0x2];
    float SpacingBetweenHalves; // 0x64
    bool bFillCutHole; // 0x68
    bool bShowPreview; // 0x69
    bool bFillSpans; // 0x6a
    char pad_6b[0x5];
    static UPlaneCutToolProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
