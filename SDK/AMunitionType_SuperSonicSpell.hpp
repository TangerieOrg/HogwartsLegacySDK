#pragma once
#include <cstdint>
#include "AMunitionType_Base.hpp"
class ASpellTool;
#pragma pack(push, 1)
class AMunitionType_SuperSonicSpell : public AMunitionType_Base {
public:
    char pad_360[0x8];
    ASpellTool* SpellTool; // 0x368
    bool AlwaysHit; // 0x370
    char pad_371[0x3];
    float IncreaseRangeBy; // 0x374
    bool IgnoreProtego; // 0x378
    char pad_379[0x27];
    static AMunitionType_SuperSonicSpell* StaticClass();
}; // Size: 0x3a0
#pragma pack(pop)
