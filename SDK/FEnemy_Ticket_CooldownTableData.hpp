#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FEnemy_Ticket_CooldownTableData : public FTableRowBase {
    FGameplayTag Tag; // 0x8
    float Time; // 0x10
    float Deviation; // 0x14
}; // Size: 0x18
#pragma pack(pop)
