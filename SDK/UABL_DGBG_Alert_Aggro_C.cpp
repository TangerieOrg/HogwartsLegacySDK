#include "AActor.hpp"
#include "ABP_Dugbog_C.hpp"
#include "FGameplayTag.hpp"
#include "UABL_DGBG_Alert_Aggro_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
UABL_DGBG_Alert_Aggro_C* UABL_DGBG_Alert_Aggro_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_Alert_Aggro.ABL_DGBG_Alert_Aggro_C");
    return (UABL_DGBG_Alert_Aggro_C*)res;
}
void UABL_DGBG_Alert_Aggro_C::OnAbilityStart0(UAblAbilityContext* Context, FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, ABP_Dugbog_C* K2Node_DynamicCast_AsBP_Dugbog, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_Alert_Aggro.ABL_DGBG_Alert_Aggro_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
        FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue; // 0x8
        AActor* CallFunc_GetOwner_ReturnValue; // 0x10
        ABP_Dugbog_C* K2Node_DynamicCast_AsBP_Dugbog; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
    }; // Size: 0x21
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    params.CallFunc_MakeLiteralGameplayTag_ReturnValue = (FGameplayTag)CallFunc_MakeLiteralGameplayTag_ReturnValue;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Dugbog = (ABP_Dugbog_C*)K2Node_DynamicCast_AsBP_Dugbog;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
