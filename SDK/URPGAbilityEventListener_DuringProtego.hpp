#pragma once
#include <cstdint>
#include "URPGAbilityEventListener.hpp"
class AWandTool;
class ASpellTool;
#pragma pack(push, 1)
class URPGAbilityEventListener_DuringProtego : public URPGAbilityEventListener {
public:
    AWandTool* Wand; // 0x98
    static URPGAbilityEventListener_DuringProtego* StaticClass();
    void OnSpellStop(ASpellTool* SpellTool);
    void OnSpellCast(ASpellTool* SpellTool);
}; // Size: 0xa0
#pragma pack(pop)
