#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FAvatarPresetColorInfo : public FTableRowBase {
    FLinearColor Color; // 0x8
}; // Size: 0x18
#pragma pack(pop)
