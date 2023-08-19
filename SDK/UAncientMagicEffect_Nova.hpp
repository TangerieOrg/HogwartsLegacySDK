#pragma once
#include <cstdint>
#include "UAncientMagicEffect.hpp"
class UClass;
class AAncientMagicNova;
class UObject;
#pragma pack(push, 1)
class UAncientMagicEffect_Nova : public UAncientMagicEffect {
public:
    UClass* NovaClass; // 0xd0
    float NovaExpandSpeed; // 0xd8
    float NovaExpandDistance; // 0xdc
    bool HidePlayerWhileActive; // 0xe0
    char pad_e1[0x7];
    AAncientMagicNova* NovaActor; // 0xe8
    char pad_f0[0x10];
    static UAncientMagicEffect_Nova* StaticClass();
    void NovaFinished(UObject* Object);
}; // Size: 0x100
#pragma pack(pop)
