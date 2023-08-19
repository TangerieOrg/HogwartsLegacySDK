#pragma once
#include <cstdint>
#include "FRigInfluenceEntry.hpp"
#pragma pack(push, 1)
struct FRigInfluenceMap {
    FName EventName; // 0x0
    TArray<FRigInfluenceEntry> Entries; // 0x8
    char pad_18[0x50];
}; // Size: 0x68
#pragma pack(pop)
