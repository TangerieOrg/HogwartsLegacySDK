#pragma once
#include <cstdint>
#include "UAncientMagicEffect.hpp"
class UClass;
class AActor;
#pragma pack(push, 1)
class UAncientMagicEffect_Test : public UAncientMagicEffect {
public:
    UClass* NovaClass; // 0xd0
    float NovaExpandSpeed; // 0xd8
    float NovaExpandDistance; // 0xdc
    AActor* NovaActor; // 0xe0
    TArray<AActor*> NotifyList; // 0xe8
    char pad_f8[0x8];
    static UAncientMagicEffect_Test* StaticClass();
    void CollisionDetected(AActor* Actor);
}; // Size: 0x100
#pragma pack(pop)
