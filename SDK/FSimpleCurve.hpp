#pragma once
#include <cstdint>
#include "ERichCurveInterpMode.hpp"
#include "FRealCurve.hpp"
#include "FSimpleCurveKey.hpp"
#pragma pack(push, 1)
struct FSimpleCurve : public FRealCurve {
    ERichCurveInterpMode InterpMode; // 0x70
    char pad_71[0x7];
    TArray<FSimpleCurveKey> Keys; // 0x78
}; // Size: 0x88
#pragma pack(pop)
