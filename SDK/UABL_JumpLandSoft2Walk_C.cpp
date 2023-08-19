#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_JumpLandSoft2Walk_C.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityContext.hpp"
#include "UBiped_AnimInstance.hpp"
#include "UFunction.hpp"
UABL_JumpLandSoft2Walk_C* UABL_JumpLandSoft2Walk_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/Jump/ABL_JumpLandSoft2Walk.ABL_JumpLandSoft2Walk_C");
    return (UABL_JumpLandSoft2Walk_C*)res;
}
void UABL_JumpLandSoft2Walk_C::OnAbilityStart0(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Locomotion/Jump/ABL_JumpLandSoft2Walk.ABL_JumpLandSoft2Walk_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_JumpLandSoft2Walk_C::ExecuteUbergraph_ABL_JumpLandSoft2Walk(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetSelfActor_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, UBiped_AnimInstance* CallFunc_GetBipedAnimInstance_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Locomotion/Jump/ABL_JumpLandSoft2Walk.ABL_JumpLandSoft2Walk_C.ExecuteUbergraph_ABL_JumpLandSoft2Walk"));
    struct Params_ExecuteUbergraph_ABL_JumpLandSoft2Walk {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x10
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        UBiped_AnimInstance* CallFunc_GetBipedAnimInstance_ReturnValue; // 0x28
        float CallFunc_MapRangeClamped_ReturnValue; // 0x30
        float CallFunc_MapRangeClamped_ReturnValue_1; // 0x34
    }; // Size: 0x38
    Params_ExecuteUbergraph_ABL_JumpLandSoft2Walk params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetBipedAnimInstance_ReturnValue = (UBiped_AnimInstance*)CallFunc_GetBipedAnimInstance_ReturnValue;
    params.CallFunc_MapRangeClamped_ReturnValue = (float)CallFunc_MapRangeClamped_ReturnValue;
    params.CallFunc_MapRangeClamped_ReturnValue_1 = (float)CallFunc_MapRangeClamped_ReturnValue_1;
    ProcessEvent(func, &params);
}
