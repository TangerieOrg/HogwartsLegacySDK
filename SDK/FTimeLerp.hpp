#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FRichCurve.hpp"
#pragma pack(push, 1)
struct FTimeLerp {
    FRichCurve ChangeCurve; // 0x0
    FDateTime StartTime; // 0x80
    float Age; // 0x88
    float CurveDuration; // 0x8c
    float bEaseOut; // 0x90
    char pad_94[0x4];
}; // Size: 0x98
#pragma pack(pop)
