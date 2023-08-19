#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FRCCachedFieldData {
    FGuid LayoutGroupId; // 0x0
    FName OwnerObjectAlias; // 0x10
}; // Size: 0x18
#pragma pack(pop)
