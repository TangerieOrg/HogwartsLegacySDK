#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UABL_NPC_RCT_Daze_OnFire_StartLoop_C.hpp"
#include "UAblAbilityContext.hpp"
#include "UAblReactionAbility.hpp"
#include "UDamageOverTime.hpp"
#include "UFunction.hpp"
#include "UObjectStateInfo.hpp"
void UABL_NPC_RCT_Daze_OnFire_StartLoop_C::OnAbilityStart(UAblAbilityContext* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Daze_OnFire_StartLoop.ABL_NPC_RCT_Daze_OnFire_StartLoop_C.OnAbilityStart"));
    struct Params_OnAbilityStart {
        UAblAbilityContext* Context; // 0x0
    }; // Size: 0x8
    Params_OnAbilityStart params{};
    params.Context = (UAblAbilityContext*)Context;
    ProcessEvent(func, &params);
}
UABL_NPC_RCT_Daze_OnFire_StartLoop_C* UABL_NPC_RCT_Daze_OnFire_StartLoop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Daze_OnFire_StartLoop.ABL_NPC_RCT_Daze_OnFire_StartLoop_C");
    return (UABL_NPC_RCT_Daze_OnFire_StartLoop_C*)res;
}
void UABL_NPC_RCT_Daze_OnFire_StartLoop_C::ExecuteUbergraph_ABL_NPC_RCT_Daze_OnFire_StartLoop(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetSelfActor_ReturnValue, int32_t Temp_int_Array_Index_Variable, TArray<UDamageOverTime*>& CallFunc_K2_GetComponentsByClass_ReturnValue, UDamageOverTime* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_SetHealth_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Daze_OnFire_StartLoop.ABL_NPC_RCT_Daze_OnFire_StartLoop_C.ExecuteUbergraph_ABL_NPC_RCT_Daze_OnFire_StartLoop"));
    struct Params_ExecuteUbergraph_ABL_NPC_RCT_Daze_OnFire_StartLoop {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAblAbilityContext* K2Node_Event_Context; // 0x8
        AActor* CallFunc_GetSelfActor_ReturnValue; // 0x10
        int32_t Temp_int_Array_Index_Variable; // 0x18
        char pad_1c[0x4];
        TArray<UDamageOverTime*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x20
        UDamageOverTime* CallFunc_Array_Get_Item; // 0x30
        int32_t CallFunc_Array_Length_ReturnValue; // 0x38
        char pad_3c[0x4];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x40
        int32_t Temp_int_Loop_Counter_Variable; // 0x48
        bool CallFunc_SetHealth_ReturnValue; // 0x4c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x4d
        char pad_4e[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x50
    }; // Size: 0x54
    Params_ExecuteUbergraph_ABL_NPC_RCT_Daze_OnFire_StartLoop params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Context = (UAblAbilityContext*)K2Node_Event_Context;
    params.CallFunc_GetSelfActor_ReturnValue = (AActor*)CallFunc_GetSelfActor_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<UDamageOverTime*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.CallFunc_Array_Get_Item = (UDamageOverTime*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_SetHealth_ReturnValue = (bool)CallFunc_SetHealth_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
}
