#include "AActor.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Levitated_Land_C.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_Levitated_Land_C* UABL_Levitated_Land_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_Levitated_Land.ABL_Levitated_Land_C");
    return (UABL_Levitated_Land_C*)res;
}
void UABL_Levitated_Land_C::OnAbilityInterrupt(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Student/Abilities/Reactions/ABL_Levitated_Land.ABL_Levitated_Land_C.OnAbilityInterrupt"));
    struct Params_OnAbilityInterrupt {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityInterrupt params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
void UABL_Levitated_Land_C::ExecuteUbergraph_ABL_Levitated_Land(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, AActor* CallFunc_GetOwner_ReturnValue) {}
