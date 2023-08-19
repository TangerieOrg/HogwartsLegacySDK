#pragma once
#include <cstdint>
#include "FConstraintNodeData.hpp"
#include "FNodeHierarchyWithUserData.hpp"
#pragma pack(push, 1)
struct FAnimationHierarchy : public FNodeHierarchyWithUserData {
    TArray<FConstraintNodeData> UserData; // 0x78
}; // Size: 0x88
#pragma pack(pop)
