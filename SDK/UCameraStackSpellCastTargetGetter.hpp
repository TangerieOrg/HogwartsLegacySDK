#pragma once
#include <cstdint>
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
#pragma pack(push, 1)
class UCameraStackSpellCastTargetGetter : public UCameraStackSecondaryTargetGetterBlend {
public:
    char pad_b0[0x10];
    static UCameraStackSpellCastTargetGetter* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
