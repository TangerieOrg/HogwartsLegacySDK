#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBP_SceneAction_LightSwitch_C.hpp"
#include "UFunction.hpp"
#include "ULightComponent.hpp"
#include "UObject.hpp"
#include "USceneAction_Blueprint.hpp"
void UBP_SceneAction_LightSwitch_C::OnEnterInterval0(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_SceneAction_LightSwitch.BP_SceneAction_LightSwitch_C.OnEnterInterval"));
    struct Params_OnEnterInterval {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnEnterInterval params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
UBP_SceneAction_LightSwitch_C* UBP_SceneAction_LightSwitch_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Lighting/BluePrints/BP_SceneAction_LightSwitch.BP_SceneAction_LightSwitch_C");
    return (UBP_SceneAction_LightSwitch_C*)res;
}
void UBP_SceneAction_LightSwitch_C::GetDisplayName0() {}
void UBP_SceneAction_LightSwitch_C::ExecuteUbergraph_BP_SceneAction_LightSwitch(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, UObject* CallFunc_GetActionObjectBP_ReturnValue, float K2Node_Event_Time_1, bool K2Node_Event_IsScrubbing_1, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_Time, bool K2Node_Event_Cancelled, bool K2Node_Event_IsScrubbing, TArray<ULightComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<bool>& CallFunc_Map_Values_Values, TArray<ULightComponent*>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_Get_Item, ULightComponent* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, ULightComponent* CallFunc_Array_Get_Item_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_SceneAction_LightSwitch.BP_SceneAction_LightSwitch_C.ExecuteUbergraph_BP_SceneAction_LightSwitch"));
    struct Params_ExecuteUbergraph_BP_SceneAction_LightSwitch {
        int32_t EntryPoint; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0xc
        UObject* CallFunc_GetActionObjectBP_ReturnValue; // 0x10
        float K2Node_Event_Time_1; // 0x18
        bool K2Node_Event_IsScrubbing_1; // 0x1c
        char pad_1d[0x3];
        AActor* K2Node_DynamicCast_AsActor; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x3];
        float K2Node_Event_Time; // 0x2c
        bool K2Node_Event_Cancelled; // 0x30
        bool K2Node_Event_IsScrubbing; // 0x31
        char pad_32[0x6];
        TArray<ULightComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x38
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x48
        int32_t CallFunc_Array_Length_ReturnValue; // 0x4c
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x50
        bool CallFunc_Less_IntInt_ReturnValue; // 0x54
        char pad_55[0x3];
        TArray<bool> CallFunc_Map_Values_Values; // 0x58
        TArray<ULightComponent*> CallFunc_Map_Keys_Keys; // 0x68
        bool CallFunc_Array_Get_Item; // 0x78
        char pad_79[0x7];
        ULightComponent* CallFunc_Array_Get_Item_1; // 0x80
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x88
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x8c
        char pad_8d[0x3];
        int32_t Temp_int_Array_Index_Variable_1; // 0x90
        char pad_94[0x4];
        ULightComponent* CallFunc_Array_Get_Item_2; // 0x98
    }; // Size: 0xa0
    Params_ExecuteUbergraph_BP_SceneAction_LightSwitch params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_GetActionObjectBP_ReturnValue = (UObject*)CallFunc_GetActionObjectBP_ReturnValue;
    params.K2Node_Event_Time_1 = (float)K2Node_Event_Time_1;
    params.K2Node_Event_IsScrubbing_1 = (bool)K2Node_Event_IsScrubbing_1;
    params.K2Node_DynamicCast_AsActor = (AActor*)K2Node_DynamicCast_AsActor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_Event_Time = (float)K2Node_Event_Time;
    params.K2Node_Event_Cancelled = (bool)K2Node_Event_Cancelled;
    params.K2Node_Event_IsScrubbing = (bool)K2Node_Event_IsScrubbing;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<ULightComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Map_Values_Values = (TArray<bool>)CallFunc_Map_Values_Values;
    params.CallFunc_Map_Keys_Keys = (TArray<ULightComponent*>)CallFunc_Map_Keys_Keys;
    params.CallFunc_Array_Get_Item = (bool)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (ULightComponent*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_Array_Get_Item_2 = (ULightComponent*)CallFunc_Array_Get_Item_2;
    ProcessEvent(func, &params);
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
    CallFunc_Map_Values_Values = params.CallFunc_Map_Values_Values;
    CallFunc_Map_Keys_Keys = params.CallFunc_Map_Keys_Keys;
}
void UBP_SceneAction_LightSwitch_C::OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_SceneAction_LightSwitch.BP_SceneAction_LightSwitch_C.OnExitInterval"));
    struct Params_OnExitInterval {
        float Time; // 0x0
        bool Cancelled; // 0x4
        bool IsScrubbing; // 0x5
    }; // Size: 0x6
    Params_OnExitInterval params{};
    params.Time = (float)Time;
    params.Cancelled = (bool)Cancelled;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
