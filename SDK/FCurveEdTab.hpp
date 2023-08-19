#pragma once
#include <cstdint>
#include "FCurveEdEntry.hpp"
#pragma pack(push, 1)
struct FCurveEdTab {
    FString TabName; // 0x0
    TArray<FCurveEdEntry> Curves; // 0x10
    float ViewStartInput; // 0x20
    float ViewEndInput; // 0x24
    float ViewStartOutput; // 0x28
    float ViewEndOutput; // 0x2c
}; // Size: 0x30
#pragma pack(pop)
