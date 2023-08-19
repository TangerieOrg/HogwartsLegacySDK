#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FNode {
    FName Name; // 0x0
    FName ParentName; // 0x8
    FTransform Transform; // 0x10
    FString DisplayName; // 0x40
    bool bAdvanced; // 0x50
    char pad_51[0xf];
}; // Size: 0x60
#pragma pack(pop)
