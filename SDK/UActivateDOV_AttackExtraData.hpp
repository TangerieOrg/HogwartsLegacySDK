#pragma once
#include <cstdint>
#include "UEnemy_AttackExtraData.hpp"
#pragma pack(push, 1)
class UActivateDOV_AttackExtraData : public UEnemy_AttackExtraData {
public:
    int32_t MinCount; // 0x28
    float MaxDistanceSquared; // 0x2c
    static UActivateDOV_AttackExtraData* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
