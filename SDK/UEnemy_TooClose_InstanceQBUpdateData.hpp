#pragma once
#include <cstdint>
#include "UEnemy_InstanceQBUpdateData.hpp"
#pragma pack(push, 1)
class UEnemy_TooClose_InstanceQBUpdateData : public UEnemy_InstanceQBUpdateData {
public:
    char pad_30[0x30];
    static UEnemy_TooClose_InstanceQBUpdateData* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
