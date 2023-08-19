#pragma once
#include <cstdint>
#include "UEnemy_QBUpdateData.hpp"
#pragma pack(push, 1)
class UEnemy_Evade_QBUpdateData : public UEnemy_QBUpdateData {
public:
    char pad_30[0x20];
    static UEnemy_Evade_QBUpdateData* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
