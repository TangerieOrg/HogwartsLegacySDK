#pragma once
#include <cstdint>
#include "FEnemy_AttackGroup.hpp"
#include "UNPC_Manager.hpp"
#pragma pack(push, 1)
class UEnemy_Manager : public UNPC_Manager {
public:
    char pad_e0[0xb0];
    TArray<FEnemy_AttackGroup> AttackGroupList; // 0x190
    char pad_1a0[0x18];
    static UEnemy_Manager* StaticClass();
}; // Size: 0x1b8
#pragma pack(pop)
