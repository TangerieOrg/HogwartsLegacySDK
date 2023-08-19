#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FMiniMapIconBackgrounds : public FTableRowBase {
    FString IconName; // 0x8
    FString IconBackgroundLayer2; // 0x18
    FString IconBackgroundLayer3; // 0x28
}; // Size: 0x38
#pragma pack(pop)
