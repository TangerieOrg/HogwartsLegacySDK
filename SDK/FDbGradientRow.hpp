#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FDbGradientRow : public FTableRowBase {
    FName DisplayName; // 0x8
    char pad_10[0x28];
}; // Size: 0x38
#pragma pack(pop)
