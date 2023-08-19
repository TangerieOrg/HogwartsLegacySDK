#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UObjectStateInfo;
class AActor;
class ASpellTool;
class UMultiFX2_Base;
#pragma pack(push, 1)
class UStateEffectComponent : public UActorComponent {
public:
    char pad_c8[0x20];
    UObjectStateInfo* ObjectStateInfo; // 0xe8
    AActor* Instigator; // 0xf0
    ASpellTool* SpellTool; // 0xf8
    TArray<UMultiFX2_Base*> FX; // 0x100
    TArray<UMultiFX2_Base*> endFX; // 0x110
    TArray<UMultiFX2_Base*> BreakoutFX; // 0x120
    char pad_130[0x60];
    static UStateEffectComponent* StaticClass();
    void SetDuration(float InDuration);
    void ResetDuration();
    float GetRemainingTime();
    void EndEffect();
}; // Size: 0x190
#pragma pack(pop)
