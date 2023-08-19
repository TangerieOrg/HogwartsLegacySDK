#pragma once
#include <cstdint>
#include "FNodeHierarchyData.hpp"
#pragma pack(push, 1)
struct FNodeHierarchyWithUserData {
    char pad_0[0x8];
    FNodeHierarchyData Hierarchy; // 0x8
}; // Size: 0x78
#pragma pack(pop)
