#pragma once
#include <cstdint>
#include "UEnemy_InstanceQBUpdateData.hpp"
#pragma pack(push, 1)
class UEnemy_RecoverWeapon_InstanceQBUpdateData : public UEnemy_InstanceQBUpdateData {
public:
    char pad_30[0x20];
    static UEnemy_RecoverWeapon_InstanceQBUpdateData* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
