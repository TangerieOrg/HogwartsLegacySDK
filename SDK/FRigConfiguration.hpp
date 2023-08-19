#pragma once
#include <cstdint>
#include "FNameMapping.hpp"
class URig;
#pragma pack(push, 1)
struct FRigConfiguration {
    URig* Rig; // 0x0
    TArray<FNameMapping> BoneMappingTable; // 0x8
}; // Size: 0x18
#pragma pack(pop)
