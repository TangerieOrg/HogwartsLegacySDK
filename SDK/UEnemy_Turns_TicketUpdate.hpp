#pragma once
#include <cstdint>
#include "UEnemy_TicketUpdate.hpp"
#pragma pack(push, 1)
class UEnemy_Turns_TicketUpdate : public UEnemy_TicketUpdate {
public:
    float UpdateInterval; // 0x50
    char pad_54[0xc];
    static UEnemy_Turns_TicketUpdate* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
