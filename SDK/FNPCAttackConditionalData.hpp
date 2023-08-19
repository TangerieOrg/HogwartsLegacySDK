#pragma once
#include <cstdint>
#include "ENPC_SelectionStates.hpp"
#pragma pack(push, 1)
struct FNPCAttackConditionalData {
    FString ConditionName; // 0x0
    ENPC_SelectionStates ConditionType; // 0x10
    char pad_11[0x57];
}; // Size: 0x68
#pragma pack(pop)
