#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
class AConfundoSpellTool : public AFireOnceSpellTool {
public:
    TArray<UMultiFX2_Base*> ConfundoFX2; // 0x870
    float DazeTime; // 0x880
    char pad_884[0x4];
    static AConfundoSpellTool* StaticClass();
}; // Size: 0x888
#pragma pack(pop)
