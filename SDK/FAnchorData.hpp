#pragma once
#include <cstdint>
#include "FAnchors.hpp"
#include "FMargin.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FAnchorData {
    FMargin Offsets; // 0x0
    FAnchors Anchors; // 0x10
    FVector2D Alignment; // 0x20
}; // Size: 0x28
#pragma pack(pop)
