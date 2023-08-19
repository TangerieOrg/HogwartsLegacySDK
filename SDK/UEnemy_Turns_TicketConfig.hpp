#pragma once
#include <cstdint>
#include "UEnemy_TicketConfig.hpp"
class UDataTable;
#pragma pack(push, 1)
class UEnemy_Turns_TicketConfig : public UEnemy_TicketConfig {
public:
    UDataTable* CooldownTable; // 0x28
    static UEnemy_Turns_TicketConfig* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
