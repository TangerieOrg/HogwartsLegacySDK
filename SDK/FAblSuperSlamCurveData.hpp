#pragma once
#include <cstdint>
class UCurveVector;
#pragma pack(push, 1)
struct FAblSuperSlamCurveData {
    FName BoneName; // 0x0
    UCurveVector* Curve; // 0x8
    bool bInvertX; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
