#pragma once
#include <cstdint>
#include "UAblTaskConditionScratchpad.hpp"
class AWorldObject;
class AActor;
class ATool;
#pragma pack(push, 1)
class UAblTaskConditionScratchpad_OppugnoProxy : public UAblTaskConditionScratchpad {
public:
    AWorldObject* instancedProxy; // 0x30
    char pad_38[0x10];
    AActor* EnemyOwner; // 0x48
    char pad_50[0x28];
    static UAblTaskConditionScratchpad_OppugnoProxy* StaticClass();
    void OnActiveSpellToolChanged(ATool* ActivatedSpell, ATool* DeactivatedSpell);
}; // Size: 0x78
#pragma pack(pop)
