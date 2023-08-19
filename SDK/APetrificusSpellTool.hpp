#pragma once
#include <cstdint>
#include "AFireOnceSpellTool.hpp"
class UInteractionArchitectAsset;
class UMultiFX2_Base;
#pragma pack(push, 1)
class APetrificusSpellTool : public AFireOnceSpellTool {
public:
    UInteractionArchitectAsset* ChargedEndMunitionDataAsset; // 0x870
    TArray<UMultiFX2_Base*> PetrificusFX2; // 0x878
    static APetrificusSpellTool* StaticClass();
}; // Size: 0x888
#pragma pack(pop)
