#pragma once
#include <cstdint>
#include "UDW_RaiseDead_AttackChoice_GameChanger.hpp"
class UEnemyAIAttackData;
#pragma pack(push, 1)
class USummonSpider_Backup_AttackChoice : public UDW_RaiseDead_AttackChoice_GameChanger {
public:
    UEnemyAIAttackData* DovSpawnAttackData; // 0x28
    static USummonSpider_Backup_AttackChoice* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
