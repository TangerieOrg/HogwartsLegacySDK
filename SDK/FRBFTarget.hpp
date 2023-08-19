#pragma once
#include <cstdint>
#include "ERBFDistanceMethod.hpp"
#include "ERBFFunctionType.hpp"
#include "FRBFEntry.hpp"
#include "FRichCurve.hpp"
#pragma pack(push, 1)
struct FRBFTarget : public FRBFEntry {
    float ScaleFactor; // 0x10
    bool bApplyCustomCurve; // 0x14
    char pad_15[0x3];
    FRichCurve CustomCurve; // 0x18
    ERBFDistanceMethod DistanceMethod; // 0x98
    ERBFFunctionType FunctionType; // 0x99
    char pad_9a[0x6];
}; // Size: 0xa0
#pragma pack(pop)
