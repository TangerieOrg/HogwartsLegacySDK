#pragma once
#include <cstdint>
#include "UObject.hpp"
class UClass;
#pragma pack(push, 1)
class UEnemyAIWeaponSpawnDataBase : public UObject {
public:
    UClass* Weapon; // 0x28
    float Chance; // 0x30
    char pad_34[0x4];
    static UEnemyAIWeaponSpawnDataBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
