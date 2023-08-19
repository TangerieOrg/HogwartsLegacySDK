#pragma once
#include <cstdint>
#include "FAkWwiseObjectDetails.hpp"
#pragma pack(push, 1)
struct FAkWwiseItemToControl {
    FAkWwiseObjectDetails ItemPicked; // 0x0
    FString ItemPath; // 0x30
}; // Size: 0x40
#pragma pack(pop)
