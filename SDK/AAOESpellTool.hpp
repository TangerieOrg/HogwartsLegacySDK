#pragma once
#include <cstdint>
#include "ASpellTool.hpp"
class UClass;
#pragma pack(push, 1)
class AAOESpellTool : public ASpellTool {
public:
    bool bTargetCharacter; // 0x7f0
    bool bTargetObject; // 0x7f1
    bool bPlayOnGround; // 0x7f2
    char pad_7f3[0x1];
    float NoTargetDistance; // 0x7f4
    UClass* AOEMunition; // 0x7f8
    static AAOESpellTool* StaticClass();
}; // Size: 0x800
#pragma pack(pop)
