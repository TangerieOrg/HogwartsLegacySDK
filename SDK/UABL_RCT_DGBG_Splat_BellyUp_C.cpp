#include "AActor.hpp"
#include "ABP_Enemy_Character_C.hpp"
#include "FGameplayTag.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_RCT_DGBG_Splat_BellyUp_C.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_RCT_DGBG_Splat_BellyUp_C* UABL_RCT_DGBG_Splat_BellyUp_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Reactions/ABL_RCT_DGBG_Splat_BellyUp.ABL_RCT_DGBG_Splat_BellyUp_C");
    return (UABL_RCT_DGBG_Splat_BellyUp_C*)res;
}
void UABL_RCT_DGBG_Splat_BellyUp_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Reactions/ABL_RCT_DGBG_Splat_BellyUp.ABL_RCT_DGBG_Splat_BellyUp_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_RCT_DGBG_Splat_BellyUp_C::ExecuteUbergraph_ABL_RCT_DGBG_Splat_BellyUp(int32_t EntryPoint, FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetOwner_ReturnValue, ABP_Enemy_Character_C* K2Node_DynamicCast_AsBP_Enemy_Character, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Reactions/ABL_RCT_DGBG_Splat_BellyUp.ABL_RCT_DGBG_Splat_BellyUp_C.ExecuteUbergraph_ABL_RCT_DGBG_Splat_BellyUp"));
    struct Params_ExecuteUbergraph_ABL_RCT_DGBG_Splat_BellyUp {
        int32_t EntryPoint; // 0x0
        FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue; // 0x4
        char pad_c[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x10
        AActor* CallFunc_GetOwner_ReturnValue; // 0x18
        ABP_Enemy_Character_C* K2Node_DynamicCast_AsBP_Enemy_Character; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
    }; // Size: 0x29
    Params_ExecuteUbergraph_ABL_RCT_DGBG_Splat_BellyUp params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_MakeLiteralGameplayTag_ReturnValue = (FGameplayTag)CallFunc_MakeLiteralGameplayTag_ReturnValue;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Enemy_Character = (ABP_Enemy_Character_C*)K2Node_DynamicCast_AsBP_Enemy_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
