#pragma once
#include <cstdint>
#include "UEnemyAIWeaponSpawnDataBase.hpp"
#pragma pack(push, 1)
class UEnemyAIWeaponSpawnData : public UEnemyAIWeaponSpawnDataBase {
public:
    static UEnemyAIWeaponSpawnData* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
