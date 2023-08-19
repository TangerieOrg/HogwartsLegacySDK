#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UUI_BP_CreatureStatusSummary_C;
class UCreatureState;
#pragma pack(push, 1)
class UUI_BP_CreatureInNurtureSpaceTooltip_C : public UUserWidget {
public:
    UUI_BP_CreatureStatusSummary_C* CreatureStatus; // 0x268
    UCreatureState* CreatureState; // 0x270
    static UUI_BP_CreatureInNurtureSpaceTooltip_C* StaticClass();
    void Init(UCreatureState* In_Creature_State, bool CallFunc_IsValid_ReturnValue);
}; // Size: 0x278
#pragma pack(pop)
