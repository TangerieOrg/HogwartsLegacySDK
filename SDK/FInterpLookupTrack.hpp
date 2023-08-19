#pragma once
#include <cstdint>
#include "FInterpLookupPoint.hpp"
#pragma pack(push, 1)
struct FInterpLookupTrack {
    TArray<FInterpLookupPoint> Points; // 0x0
}; // Size: 0x10
#pragma pack(pop)
