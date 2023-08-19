#pragma once
#include <cstdint>
#include "FIndexedCurve.hpp"
#include "FIntegralKey.hpp"
#pragma pack(push, 1)
struct FIntegralCurve : public FIndexedCurve {
    TArray<FIntegralKey> Keys; // 0x68
    int32_t DefaultValue; // 0x78
    bool bUseDefaultValueBeforeFirstKey; // 0x7c
    char pad_7d[0x3];
}; // Size: 0x80
#pragma pack(pop)
