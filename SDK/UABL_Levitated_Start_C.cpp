#include "AActor.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Levitated_Start_C.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_Levitated_Start_C* UABL_Levitated_Start_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_Levitated_Start.ABL_Levitated_Start_C");
    return (UABL_Levitated_Start_C*)res;
}
void UABL_Levitated_Start_C::OnAbilityEnd(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Reactions/ABL_Levitated_Start.ABL_Levitated_Start_C.OnAbilityEnd"));
    struct Params_OnAbilityEnd {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityEnd params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Levitated_Start_C::OnAbilityInterrupt(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Reactions/ABL_Levitated_Start.ABL_Levitated_Start_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Levitated_Start_C::ExecuteUbergraph_ABL_Levitated_Start(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, AActor* CallFunc_GetOwner_ReturnValue) {}
