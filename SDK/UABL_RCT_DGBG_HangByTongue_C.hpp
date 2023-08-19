#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
class UAblAbility;
class AActor;
#pragma pack(push, 1)
class UABL_RCT_DGBG_HangByTongue_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    static UABL_RCT_DGBG_HangByTongue_C* StaticClass();
    void OnAbilityStart(UAblAbilityContext* Context);
    void OnAbilityEnd(UAblAbilityContext* Context);
    void OnAbilityInterrupt(UAblAbilityContext* Context);
    void OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility);
    void ExecuteUbergraph_ABL_RCT_DGBG_HangByTongue(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, FName Temp_name_Variable, UAblAbilityContext* K2Node_Event_Context_3, UAblAbilityContext* K2Node_Event_Context_2, AActor* CallFunc_GetOwner_ReturnValue, UAblAbilityContext* K2Node_Event_Context_1, int32_t CallFunc_Array_AddUnique_ReturnValue);
}; // Size: 0xe8
#pragma pack(pop)
