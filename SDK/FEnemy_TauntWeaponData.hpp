#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FEnemy_TauntWeaponData {
    TArray<UClass*> RequiredWeaponList; // 0x0
    TArray<UClass*> RequiredShieldList; // 0x10
}; // Size: 0x20
#pragma pack(pop)
