#pragma once
#include <cstdint>
#include "ERichCurveExtrapolation.hpp"
#include "FIndexedCurve.hpp"
#pragma pack(push, 1)
struct FRealCurve : public FIndexedCurve {
    float DefaultValue; // 0x68
    ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
    ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
    char pad_6e[0x2];
}; // Size: 0x70
#pragma pack(pop)
