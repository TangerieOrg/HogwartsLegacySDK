#pragma once
#include <cstdint>
#include "UEnemy_InstanceQBUpdateData.hpp"
#pragma pack(push, 1)
class UEnemy_Around_InstanceQBUpdateData : public UEnemy_InstanceQBUpdateData {
public:
    char pad_30[0x8];
    static UEnemy_Around_InstanceQBUpdateData* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
