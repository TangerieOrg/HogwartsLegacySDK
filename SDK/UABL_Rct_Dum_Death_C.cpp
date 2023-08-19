#include "AActor.hpp"
#include "ABP_TrainingDummy_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Rct_Dum_Death_C.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_Rct_Dum_Death_C* UABL_Rct_Dum_Death_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/TrainingDummy/ABL_Rct_Dum_Death.ABL_Rct_Dum_Death_C");
    return (UABL_Rct_Dum_Death_C*)res;
}
void UABL_Rct_Dum_Death_C::ExecuteUbergraph_ABL_Rct_Dum_Death(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetSelfActor_ReturnValue, ABP_TrainingDummy_C* K2Node_DynamicCast_AsBP_Training_Dummy, bool K2Node_DynamicCast_bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/ABL_Rct_Dum_Death.ABL_Rct_Dum_Death_C.ExecuteUbergraph_ABL_Rct_Dum_Death"));
    struct Params_ExecuteUbergraph_ABL_Rct_Dum_Death {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x10
        ABP_TrainingDummy_C* K2Node_DynamicCast_AsBP_Training_Dummy; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
    }; // Size: 0x21
    Params_ExecuteUbergraph_ABL_Rct_Dum_Death params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Training_Dummy = (ABP_TrainingDummy_C*)K2Node_DynamicCast_AsBP_Training_Dummy;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    ProcessEvent(func, &params);
}
void UABL_Rct_Dum_Death_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/ABL_Rct_Dum_Death.ABL_Rct_Dum_Death_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
