#pragma once
#include <cstdint>
#include "FHairGroupInfo.hpp"
#pragma pack(push, 1)
struct FHairGroupInfoWithVisibility : public FHairGroupInfo {
    bool bIsVisible; // 0x18
    char pad_19[0x3];
}; // Size: 0x1c
#pragma pack(pop)
