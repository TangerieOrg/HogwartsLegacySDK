#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_AddTimeToDOT : public URPGTriggerEffect_Base {
public:
    TArray<FName> SpellNames; // 0x40
    float DurationToAdd; // 0x50
    char pad_54[0x4];
    static URPGTriggerEffect_AddTimeToDOT* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
