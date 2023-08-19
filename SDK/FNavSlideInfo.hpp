#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FNavSlideInfo {
    FVector BottomLinkEnd; // 0x0
    FVector TopLinkEnd; // 0xc
}; // Size: 0x18
#pragma pack(pop)
