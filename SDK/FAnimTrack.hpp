#pragma once
#include <cstdint>
#include "FAnimSegment.hpp"
#pragma pack(push, 1)
struct FAnimTrack {
    TArray<FAnimSegment> AnimSegments; // 0x0
}; // Size: 0x10
#pragma pack(pop)
