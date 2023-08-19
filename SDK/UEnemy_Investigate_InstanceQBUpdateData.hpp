#pragma once
#include <cstdint>
#include "UEnemy_InstanceQBUpdateData.hpp"
#pragma pack(push, 1)
class UEnemy_Investigate_InstanceQBUpdateData : public UEnemy_InstanceQBUpdateData {
public:
    char pad_30[0x60];
    static UEnemy_Investigate_InstanceQBUpdateData* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
