#pragma once
#include <cstdint>
#include "FNodeObject.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FNodeHierarchyData {
    TArray<FNodeObject> Nodes; // 0x0
    TArray<FTransform> Transforms; // 0x10
    char pad_20[0x50];
}; // Size: 0x70
#pragma pack(pop)
