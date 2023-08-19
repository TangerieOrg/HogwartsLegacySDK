#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UEnemyWeapon_Manager : public UObject {
public:
    char pad_28[0x8];
    TArray<void*> WeaponList; // 0x30
    char pad_40[0x8];
    static UEnemyWeapon_Manager* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
