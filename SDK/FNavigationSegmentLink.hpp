#pragma once
#include <cstdint>
#include "FNavigationLinkBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FNavigationSegmentLink : public FNavigationLinkBase {
    FVector LeftStart; // 0x30
    FVector LeftEnd; // 0x3c
    FVector RightStart; // 0x48
    FVector RightEnd; // 0x54
}; // Size: 0x60
#pragma pack(pop)
