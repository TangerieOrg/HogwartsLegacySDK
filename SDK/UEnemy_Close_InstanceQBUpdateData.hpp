#pragma once
#include <cstdint>
#include "UEnemy_InstanceQBUpdateData.hpp"
#pragma pack(push, 1)
class UEnemy_Close_InstanceQBUpdateData : public UEnemy_InstanceQBUpdateData {
public:
    char pad_30[0x18];
    static UEnemy_Close_InstanceQBUpdateData* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
