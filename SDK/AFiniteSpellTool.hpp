#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
#pragma pack(push, 1)
class AFiniteSpellTool : public AFireOnceSpellTool {
public:
    int32_t FiniteLevel; // 0x870
    bool bRemoveSpellsFromOtherCasters; // 0x874
    bool bRemoveBuffs; // 0x875
    char pad_876[0x2];
    static AFiniteSpellTool* StaticClass();
}; // Size: 0x878
#pragma pack(pop)
