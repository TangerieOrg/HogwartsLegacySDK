#pragma once
#include <cstdint>
#include "EObjectTypeQuery.hpp"
#include "ERadialImpulseFalloff.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class URadialForceComponent : public USceneComponent {
public:
    float ImpulseStrength; // 0x220
    uint8_t bImpulseVelChange : 1; // 0x224
    uint8_t bIgnoreOwningActor : 1; // 0x224
    uint8_t pad_bitfield_224_2 : 6;
    char pad_225[0x3];
    float ForceStrength; // 0x228
    float DestructibleDamage; // 0x22c
    TArray<EObjectTypeQuery> ObjectTypesToAffect; // 0x230
    char pad_240[0x10];
    static URadialForceComponent* StaticClass();
    void RemoveObjectTypeToAffect(EObjectTypeQuery ObjectType);
    void FireImpulse();
    void AddObjectTypeToAffect(EObjectTypeQuery ObjectType);
}; // Size: 0x250
#pragma pack(pop)
