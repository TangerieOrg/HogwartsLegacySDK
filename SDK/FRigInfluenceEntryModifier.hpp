#pragma once
#include <cstdint>
#include "FRigElementKey.hpp"
#pragma pack(push, 1)
struct FRigInfluenceEntryModifier {
    TArray<FRigElementKey> AffectedList; // 0x0
}; // Size: 0x10
#pragma pack(pop)
