#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FEnemy_WeaponAttackData {
    TArray<UClass*> RequiredList; // 0x0
    UClass* TransientWeapon; // 0x10
    FName TransientWeaponSocket; // 0x18
    float EquipedSelectScale; // 0x20
    float StoredSelectScale; // 0x24
    float SeekSelectScale; // 0x28
    bool bDeferredEquip; // 0x2c
    bool bDoNotUseWeaponForAttack; // 0x2d
    bool bDestroyTransientWeaponOnDeactivate; // 0x2e
    char pad_2f[0x1];
}; // Size: 0x30
#pragma pack(pop)
