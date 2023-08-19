#pragma once
#include <cstdint>
#include "FDebugMapPoint.hpp"
#pragma pack(push, 1)
struct FDebugMapLine {
    TArray<FDebugMapPoint> Points; // 0x0
}; // Size: 0x10
#pragma pack(pop)
