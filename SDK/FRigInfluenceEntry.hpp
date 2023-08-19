#pragma once
#include <cstdint>
#include "FRigElementKey.hpp"
#pragma pack(push, 1)
struct FRigInfluenceEntry {
    FRigElementKey Source; // 0x0
    char pad_c[0x4];
    TArray<FRigElementKey> AffectedList; // 0x10
}; // Size: 0x20
#pragma pack(pop)
