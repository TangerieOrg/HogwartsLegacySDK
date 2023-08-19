#pragma once
#include <cstdint>
#include "ASpellTool.hpp"
#include "FAdditionalProjectiles.hpp"
#pragma pack(push, 1)
class AFireOnceSpellTool : public ASpellTool {
public:
    TArray<FAdditionalProjectiles> AdditionalProjectiles; // 0x7f0
    char pad_800[0x70];
    static AFireOnceSpellTool* StaticClass();
}; // Size: 0x870
#pragma pack(pop)
