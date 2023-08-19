#pragma once
#include <cstdint>
#include "FIndexedCurve.hpp"
#include "FStringCurveKey.hpp"
#pragma pack(push, 1)
struct FStringCurve : public FIndexedCurve {
    FString DefaultValue; // 0x68
    TArray<FStringCurveKey> Keys; // 0x78
}; // Size: 0x88
#pragma pack(pop)
