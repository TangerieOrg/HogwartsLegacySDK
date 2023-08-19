#include "FPointerToUberGraphFrame.hpp"
#include "UABL_Rct_Dum_Death_02_C.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UFunction.hpp"
UABL_Rct_Dum_Death_02_C* UABL_Rct_Dum_Death_02_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/TrainingDummy/ABL_Rct_Dum_Death_02.ABL_Rct_Dum_Death_02_C");
    return (UABL_Rct_Dum_Death_02_C*)res;
}
void UABL_Rct_Dum_Death_02_C::ExecuteUbergraph_ABL_Rct_Dum_Death_02(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/ABL_Rct_Dum_Death_02.ABL_Rct_Dum_Death_02_C.ExecuteUbergraph_ABL_Rct_Dum_Death_02"));
    struct Params_ExecuteUbergraph_ABL_Rct_Dum_Death_02 {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_ABL_Rct_Dum_Death_02 params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    ProcessEvent(func, &params);
}
void UABL_Rct_Dum_Death_02_C::OnCustomEvent(UAblAbilityContext* Context, FName& EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/ABL_Rct_Dum_Death_02.ABL_Rct_Dum_Death_02_C.OnCustomEvent"));
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
void UABL_Rct_Dum_Death_02_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/ABL_Rct_Dum_Death_02.ABL_Rct_Dum_Death_02_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
