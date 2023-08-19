#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UEnemy_InstanceQBUpdateData.hpp"
#pragma pack(push, 1)
class UEnemy_Duel_InstanceQBUpdateData : public UEnemy_InstanceQBUpdateData {
public:
    char pad_30[0x44];
    FVector EndPoint1; // 0x74
    FVector EndPoint2; // 0x80
    char pad_8c[0x4];
    static UEnemy_Duel_InstanceQBUpdateData* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
