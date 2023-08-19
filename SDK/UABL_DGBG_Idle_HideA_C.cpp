#include "AActor.hpp"
#include "ABP_Dugbog_C.hpp"
#include "ABiped_Player.hpp"
#include "FGameplayTag.hpp"
#include "UABL_DGBG_Idle_HideA_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
UABL_DGBG_Idle_HideA_C* UABL_DGBG_Idle_HideA_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_Idle_HideA.ABL_DGBG_Idle_HideA_C");
    return (UABL_DGBG_Idle_HideA_C*)res;
}
void UABL_DGBG_Idle_HideA_C::OnCustomEvent0(UAblAbilityContext* Context, FName& EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_Idle_HideA.ABL_DGBG_Idle_HideA_C.OnCustomEvent"));
    struct Params_OnCustomEvent {
        UAblAbilityContext* Context; // 0x0
        FName EventName; // 0x8
    }; // Size: 0x10
    Params_OnCustomEvent params{};
    params.Context = (UAblAbilityContext*)Context;
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
    EventName = params.EventName;
}
void UABL_DGBG_Idle_HideA_C::OnAbilityStart0(UAblAbilityContext* Context, FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ABP_Dugbog_C* K2Node_DynamicCast_AsBP_Dugbog, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsStationary_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_Idle_HideA.ABL_DGBG_Idle_HideA_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
        FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue; // 0x8
        AActor* CallFunc_GetOwner_ReturnValue; // 0x10
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x18
        ABP_Dugbog_C* K2Node_DynamicCast_AsBP_Dugbog; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        bool CallFunc_IsStationary_ReturnValue; // 0x29
    }; // Size: 0x2a
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    params.CallFunc_MakeLiteralGameplayTag_ReturnValue = (FGameplayTag)CallFunc_MakeLiteralGameplayTag_ReturnValue;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Dugbog = (ABP_Dugbog_C*)K2Node_DynamicCast_AsBP_Dugbog;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_IsStationary_ReturnValue = (bool)CallFunc_IsStationary_ReturnValue;
    ProcessEvent(func, &params);
}
