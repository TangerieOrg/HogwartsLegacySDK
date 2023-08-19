#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
#pragma pack(push, 1)
class UABL_NpcReact_CowerWandLinkStart_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    static UABL_NpcReact_CowerWandLinkStart_C* StaticClass();
    void OnAbilityStart(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_NpcReact_CowerWandLinkStart(int32_t EntryPoint, FName CallFunc_GetStatName_ReturnValue, UAblAbilityContext* K2Node_Event_Context);
}; // Size: 0xe8
#pragma pack(pop)
