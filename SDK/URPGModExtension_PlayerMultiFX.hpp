#pragma once
#include <cstdint>
#include "FMultiFXPlus.hpp"
#include "FMultiFXPlusHandles.hpp"
#include "UModExtension.hpp"
#pragma pack(push, 1)
class URPGModExtension_PlayerMultiFX : public UModExtension {
public:
    FMultiFXPlus OnAddEffect; // 0x28
    FMultiFXPlus OnAppliedEffect; // 0x98
    bool bOnlyOnFirstApplied; // 0x108
    bool bOnlyAllowOneApplied; // 0x109
    bool bEndAppliedOnRemoved; // 0x10a
    char pad_10b[0x5];
    FMultiFXPlus OnRemovedEffect; // 0x110
    FMultiFXPlusHandles OnAddHandle; // 0x180
    FMultiFXPlusHandles OnAppliedHandle; // 0x190
    static URPGModExtension_PlayerMultiFX* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)
