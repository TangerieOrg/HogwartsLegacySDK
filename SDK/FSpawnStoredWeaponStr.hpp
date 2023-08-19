#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FSpawnStoredWeaponStr {
    UClass* weaponClassType; // 0x0
    bool bForceSpawn; // 0x8
    bool bSkipSpawnStored; // 0x9
    char pad_a[0x6];
}; // Size: 0x10
#pragma pack(pop)
