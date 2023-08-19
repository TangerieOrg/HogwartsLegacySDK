#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
class AActor;
class ASpellTool;
#pragma pack(push, 1)
class URPGTriggerEffect_PolyJuice : public URPGTriggerEffect_Base {
public:
    char pad_40[0x8];
    AActor* Owner; // 0x48
    static URPGTriggerEffect_PolyJuice* StaticClass();
    void OnSpellCast(ASpellTool* SpellTool);
}; // Size: 0x50
#pragma pack(pop)
