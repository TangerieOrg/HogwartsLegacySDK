#pragma once
#include <cstdint>
#include "ATransfigurationSpellToolBase.hpp"
class UClass;
#pragma pack(push, 1)
class AVanishmentSpellTool : public ATransfigurationSpellToolBase {
public:
    char pad_ab0[0x28];
    TArray<UClass*> VanishmentStyles; // 0xad8
    static AVanishmentSpellTool* StaticClass();
}; // Size: 0xae8
#pragma pack(pop)
