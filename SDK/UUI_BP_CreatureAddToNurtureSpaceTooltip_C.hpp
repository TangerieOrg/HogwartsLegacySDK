#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UUI_BP_CreatureStatusSummary_C;
class UCreatureState;
#pragma pack(push, 1)
class UUI_BP_CreatureAddToNurtureSpaceTooltip_C : public UUserWidget {
public:
    UUI_BP_CreatureStatusSummary_C* CreatureStatus; // 0x268
    static UUI_BP_CreatureAddToNurtureSpaceTooltip_C* StaticClass();
    void Init(UCreatureState* Creature_State);
}; // Size: 0x270
#pragma pack(pop)
