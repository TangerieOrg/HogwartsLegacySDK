#pragma once
#include <cstdint>
#include "ESlateSizeRule\Type.hpp"
#pragma pack(push, 1)
struct FSlateChildSize {
    float Value; // 0x0
    ESlateSizeRule::Type SizeRule; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
