#pragma once
#include <cstdint>
#include "FAnimCurveBase.hpp"
#include "FRichCurve.hpp"
#pragma pack(push, 1)
struct FFloatCurve : public FAnimCurveBase {
    FRichCurve FloatCurve; // 0x18
}; // Size: 0x98
#pragma pack(pop)
