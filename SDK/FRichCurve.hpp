#pragma once
#include <cstdint>
#include "FRealCurve.hpp"
#include "FRichCurveKey.hpp"
#pragma pack(push, 1)
struct FRichCurve : public FRealCurve {
    TArray<FRichCurveKey> Keys; // 0x70
}; // Size: 0x80
#pragma pack(pop)
