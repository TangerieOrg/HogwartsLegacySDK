#pragma once
#include <cstdint>
#include "AAOESpellTool.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_Spell_Spider_BurrowAoe_C : public AAOESpellTool {
public:
    USceneComponent* DefaultSceneRoot; // 0x800
    static ABP_Spell_Spider_BurrowAoe_C* StaticClass();
}; // Size: 0x808
#pragma pack(pop)
