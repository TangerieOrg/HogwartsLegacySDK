#pragma once
#include <cstdint>
#include "UEnemy_InstanceQBUpdateData.hpp"
#pragma pack(push, 1)
class UEnemy_TombProtector_InstanceQBUpdateData : public UEnemy_InstanceQBUpdateData {
public:
    char pad_30[0x50];
    static UEnemy_TombProtector_InstanceQBUpdateData* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
