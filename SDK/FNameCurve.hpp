#pragma once
#include <cstdint>
#include "FIndexedCurve.hpp"
#include "FNameCurveKey.hpp"
#pragma pack(push, 1)
struct FNameCurve : public FIndexedCurve {
    TArray<FNameCurveKey> Keys; // 0x68
}; // Size: 0x78
#pragma pack(pop)
