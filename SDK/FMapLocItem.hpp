#pragma once
#include <cstdint>
#include "EMapLocTypes\Type.hpp"
#pragma pack(push, 1)
struct FMapLocItem {
    EMapLocTypes::Type MapAction; // 0x0
    char pad_1[0x7];
    FString ButtonKey; // 0x8
    FString LocKey; // 0x18
}; // Size: 0x28
#pragma pack(pop)
