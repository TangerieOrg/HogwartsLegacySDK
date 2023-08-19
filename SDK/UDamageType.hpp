#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UDamageType : public UObject {
public:
    uint8_t bCausedByWorld : 1; // 0x28
    uint8_t bScaleMomentumByMass : 1; // 0x28
    uint8_t bRadialDamageVelChange : 1; // 0x28
    uint8_t pad_bitfield_28_3 : 5;
    char pad_29[0x3];
    float DamageImpulse; // 0x2c
    float DestructibleImpulse; // 0x30
    float DestructibleDamageSpreadScale; // 0x34
    float DamageFalloff; // 0x38
    char pad_3c[0x4];
    static UDamageType* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
