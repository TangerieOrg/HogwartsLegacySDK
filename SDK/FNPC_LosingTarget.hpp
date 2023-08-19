#pragma once
#include <cstdint>
#include "ENPC_LosingTargetType.hpp"
#include "FNPC_DynamicBehaviorTree.hpp"
#pragma pack(push, 1)
struct FNPC_LosingTarget {
    ENPC_LosingTargetType State; // 0x0
    char pad_1[0x7];
    FNPC_DynamicBehaviorTree DynamicBehaviorTree; // 0x8
}; // Size: 0x18
#pragma pack(pop)
