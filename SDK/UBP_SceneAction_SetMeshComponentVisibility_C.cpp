#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBP_SceneAction_SetMeshComponentVisibility_C.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
#include "UObject.hpp"
#include "USceneAction_Blueprint.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStaticMeshComponent.hpp"
UBP_SceneAction_SetMeshComponentVisibility_C* UBP_SceneAction_SetMeshComponentVisibility_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/Custom/SpecialDelivery/BP_SceneAction_SetMeshComponentVisibility.BP_SceneAction_SetMeshComponentVisibility_C");
    return (UBP_SceneAction_SetMeshComponentVisibility_C*)res;
}
bool UBP_SceneAction_SetMeshComponentVisibility_C::IsInstant0(bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Custom/SpecialDelivery/BP_SceneAction_SetMeshComponentVisibility.BP_SceneAction_SetMeshComponentVisibility_C.IsInstant"));
    struct Params_IsInstant {
        bool ReturnValue; // 0x0
        bool CallFunc_Not_PreBool_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsInstant params{};
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBP_SceneAction_SetMeshComponentVisibility_C::OnEnterInterval0(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Custom/SpecialDelivery/BP_SceneAction_SetMeshComponentVisibility.BP_SceneAction_SetMeshComponentVisibility_C.OnEnterInterval"));
    struct Params_OnEnterInterval {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnEnterInterval params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void UBP_SceneAction_SetMeshComponentVisibility_C::OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Custom/SpecialDelivery/BP_SceneAction_SetMeshComponentVisibility.BP_SceneAction_SetMeshComponentVisibility_C.OnExitInterval"));
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
void UBP_SceneAction_SetMeshComponentVisibility_C::OnInstant0(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Custom/SpecialDelivery/BP_SceneAction_SetMeshComponentVisibility.BP_SceneAction_SetMeshComponentVisibility_C.OnInstant"));
    struct Params_OnInstant {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnInstant params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void UBP_SceneAction_SetMeshComponentVisibility_C::ExecuteUbergraph_BP_SceneAction_SetMeshComponentVisibility(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, UObject* CallFunc_GetActionObjectBP_ReturnValue, float K2Node_Event_Time_2, bool K2Node_Event_IsScrubbing_2, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_Time_1, bool K2Node_Event_Cancelled, bool K2Node_Event_IsScrubbing_1, TArray<UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, TArray<USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, UMeshComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UObject* CallFunc_GetActionObjectBP_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, AActor* K2Node_DynamicCast_AsActor_1, bool K2Node_DynamicCast_bSuccess_1, TArray<UStaticMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue, TArray<USkeletalMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, float K2Node_Event_Time, bool K2Node_Event_IsScrubbing, int32_t Temp_int_Array_Index_Variable_1, UMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_IsVisible_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Stations/Custom/SpecialDelivery/BP_SceneAction_SetMeshComponentVisibility.BP_SceneAction_SetMeshComponentVisibility_C.ExecuteUbergraph_BP_SceneAction_SetMeshComponentVisibility"));
    struct Params_ExecuteUbergraph_BP_SceneAction_SetMeshComponentVisibility {
        int32_t EntryPoint; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0xc
        UObject* CallFunc_GetActionObjectBP_ReturnValue; // 0x10
        float K2Node_Event_Time_2; // 0x18
        bool K2Node_Event_IsScrubbing_2; // 0x1c
        char pad_1d[0x3];
        AActor* K2Node_DynamicCast_AsActor; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x3];
        float K2Node_Event_Time_1; // 0x2c
        bool K2Node_Event_Cancelled; // 0x30
        bool K2Node_Event_IsScrubbing_1; // 0x31
        char pad_32[0x6];
        TArray<UStaticMeshComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x38
        TArray<USkeletalMeshComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue_1; // 0x48
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0x58
        char pad_59[0x7];
        UMeshComponent* CallFunc_Array_Get_Item; // 0x60
        int32_t CallFunc_Array_Length_ReturnValue; // 0x68
        bool CallFunc_Less_IntInt_ReturnValue; // 0x6c
        char pad_6d[0x3];
        UObject* CallFunc_GetActionObjectBP_ReturnValue_1; // 0x70
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x78
        char pad_7c[0x4];
        AActor* K2Node_DynamicCast_AsActor_1; // 0x80
        bool K2Node_DynamicCast_bSuccess_1; // 0x88
        char pad_89[0x7];
        TArray<UStaticMeshComponent*> CallFunc_GetComponentsByTag_ReturnValue; // 0x90
        TArray<USkeletalMeshComponent*> CallFunc_GetComponentsByTag_ReturnValue_1; // 0xa0
        int32_t Temp_int_Loop_Counter_Variable_1; // 0xb0
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0xb4
        char pad_b5[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0xb8
        float K2Node_Event_Time; // 0xbc
        bool K2Node_Event_IsScrubbing; // 0xc0
        char pad_c1[0x3];
        int32_t Temp_int_Array_Index_Variable_1; // 0xc4
        UMeshComponent* CallFunc_Array_Get_Item_1; // 0xc8
        bool CallFunc_IsVisible_ReturnValue; // 0xd0
        char pad_d1[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0xd4
    }; // Size: 0xd8
    Params_ExecuteUbergraph_BP_SceneAction_SetMeshComponentVisibility params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_GetActionObjectBP_ReturnValue = (UObject*)CallFunc_GetActionObjectBP_ReturnValue;
    params.K2Node_Event_Time_2 = (float)K2Node_Event_Time_2;
    params.K2Node_Event_IsScrubbing_2 = (bool)K2Node_Event_IsScrubbing_2;
    params.K2Node_DynamicCast_AsActor = (AActor*)K2Node_DynamicCast_AsActor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_Event_Time_1 = (float)K2Node_Event_Time_1;
    params.K2Node_Event_Cancelled = (bool)K2Node_Event_Cancelled;
    params.K2Node_Event_IsScrubbing_1 = (bool)K2Node_Event_IsScrubbing_1;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<UStaticMeshComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue_1 = (TArray<USkeletalMeshComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue_1;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_Array_Get_Item = (UMeshComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_GetActionObjectBP_ReturnValue_1 = (UObject*)CallFunc_GetActionObjectBP_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.K2Node_DynamicCast_AsActor_1 = (AActor*)K2Node_DynamicCast_AsActor_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_GetComponentsByTag_ReturnValue = (TArray<UStaticMeshComponent*>)CallFunc_GetComponentsByTag_ReturnValue;
    params.CallFunc_GetComponentsByTag_ReturnValue_1 = (TArray<USkeletalMeshComponent*>)CallFunc_GetComponentsByTag_ReturnValue_1;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.K2Node_Event_Time = (float)K2Node_Event_Time;
    params.K2Node_Event_IsScrubbing = (bool)K2Node_Event_IsScrubbing;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_Array_Get_Item_1 = (UMeshComponent*)CallFunc_Array_Get_Item_1;
    params.CallFunc_IsVisible_ReturnValue = (bool)CallFunc_IsVisible_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
    CallFunc_K2_GetComponentsByClass_ReturnValue_1 = params.CallFunc_K2_GetComponentsByClass_ReturnValue_1;
    CallFunc_GetComponentsByTag_ReturnValue = params.CallFunc_GetComponentsByTag_ReturnValue;
    CallFunc_GetComponentsByTag_ReturnValue_1 = params.CallFunc_GetComponentsByTag_ReturnValue_1;
}
