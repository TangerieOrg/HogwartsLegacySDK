#pragma once
#include <cstdint>
#include "UAblAnimationTagChooser.hpp"
class USpellToolRecord;
#pragma pack(push, 1)
class UAblAnimationTagChooser_ProtegoRetaliate : public UAblAnimationTagChooser {
public:
    TArray<USpellToolRecord*> SpellToEquip; // 0x50
    static UAblAnimationTagChooser_ProtegoRetaliate* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
