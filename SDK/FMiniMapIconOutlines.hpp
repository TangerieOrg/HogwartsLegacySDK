#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FMiniMapIconOutlines : public FTableRowBase {
    FString IconName; // 0x8
    FString OutlineName; // 0x18
}; // Size: 0x28
#pragma pack(pop)
