#include "AActor.hpp"
#include "ABP_Enemy_Character_C.hpp"
#include "UABL_DGBG_TongueWhipAttack_Backup_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UFunction.hpp"
UABL_DGBG_TongueWhipAttack_Backup_C* UABL_DGBG_TongueWhipAttack_Backup_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_TongueWhipAttack_Backup.ABL_DGBG_TongueWhipAttack_Backup_C");
    return (UABL_DGBG_TongueWhipAttack_Backup_C*)res;
}
bool UABL_DGBG_TongueWhipAttack_Backup_C::CustomCanBranchTo0(UAblAbilityContext* Context, AActor* CallFunc_GetOwner_ReturnValue, ABP_Enemy_Character_C* K2Node_DynamicCast_AsBP_Enemy_Character, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetTarget_ReturnValue, bool CallFunc_WasAttackParried_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_TongueWhipAttack_Backup.ABL_DGBG_TongueWhipAttack_Backup_C.CustomCanBranchTo"));
    struct Params_CustomCanBranchTo {
        UAblAbilityContext* Context; // 0x0
        bool ReturnValue; // 0x8
        char pad_9[0x7];
        AActor* CallFunc_GetOwner_ReturnValue; // 0x10
        ABP_Enemy_Character_C* K2Node_DynamicCast_AsBP_Enemy_Character; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        AActor* CallFunc_GetTarget_ReturnValue; // 0x28
        bool CallFunc_WasAttackParried_ReturnValue; // 0x30
    }; // Size: 0x31
    Params_CustomCanBranchTo params{};
    params.Context = (UAblAbilityContext*)Context;
    params.CallFunc_GetOwner_ReturnValue = (AActor*)CallFunc_GetOwner_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Enemy_Character = (ABP_Enemy_Character_C*)K2Node_DynamicCast_AsBP_Enemy_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetTarget_ReturnValue = (AActor*)CallFunc_GetTarget_ReturnValue;
    params.CallFunc_WasAttackParried_ReturnValue = (bool)CallFunc_WasAttackParried_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
