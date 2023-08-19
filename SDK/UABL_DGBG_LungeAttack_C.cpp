#include "AActor.hpp"
#include "ABP_Dugbog_C.hpp"
#include "FGameplayTag.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_DGBG_LungeAttack_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
UABL_DGBG_LungeAttack_C* UABL_DGBG_LungeAttack_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_LungeAttack.ABL_DGBG_LungeAttack_C");
    return (UABL_DGBG_LungeAttack_C*)res;
}
void UABL_DGBG_LungeAttack_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_LungeAttack.ABL_DGBG_LungeAttack_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_DGBG_LungeAttack_C::ExecuteUbergraph_ABL_DGBG_LungeAttack(int32_t EntryPoint, FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetOwner_ReturnValue, ABP_Dugbog_C* K2Node_DynamicCast_AsBP_Dugbog, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_LungeAttack.ABL_DGBG_LungeAttack_C.ExecuteUbergraph_ABL_DGBG_LungeAttack"));
    struct Params_ExecuteUbergraph_ABL_DGBG_LungeAttack {
        int32_t EntryPoint; // 0x0
        FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue; // 0x4
        char pad_c[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x10
        AActor* CallFunc_GetOwner_ReturnValue; // 0x18
        ABP_Dugbog_C* K2Node_DynamicCast_AsBP_Dugbog; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
    }; // Size: 0x29
    Params_ExecuteUbergraph_ABL_DGBG_LungeAttack params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_MakeLiteralGameplayTag_ReturnValue = (FGameplayTag)CallFunc_MakeLiteralGameplayTag_ReturnValue;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Dugbog = (ABP_Dugbog_C*)K2Node_DynamicCast_AsBP_Dugbog;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
