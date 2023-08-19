#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBP_SceneAction_TransformLightRig_C.hpp"
#include "UBoolProvider.hpp"
#include "UCameraComponent.hpp"
#include "UCameraFixupComponent.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneAction_Blueprint.hpp"
#include "USceneComponent.hpp"
UBP_SceneAction_TransformLightRig_C* UBP_SceneAction_TransformLightRig_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Cinematics/Lighting/BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C");
    return (UBP_SceneAction_TransformLightRig_C*)res;
}
float UBP_SceneAction_TransformLightRig_C::GetSortOrderPostActorTick0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.GetSortOrderPostActorTick"));
    struct Params_GetSortOrderPostActorTick {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSortOrderPostActorTick params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UBP_SceneAction_TransformLightRig_C::IsRigVisible(bool& Result, UObject* CallFunc_GetContext_ReturnValue, bool CallFunc_GetBoolBP_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.IsRigVisible"));
    struct Params_IsRigVisible {
        bool Result; // 0x0
        char pad_1[0x7];
        UObject* CallFunc_GetContext_ReturnValue; // 0x8
        bool CallFunc_GetBoolBP_ReturnValue; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x11
    }; // Size: 0x12
    Params_IsRigVisible params{};
    params.Result = (bool)Result;
    params.CallFunc_GetContext_ReturnValue = (UObject*)CallFunc_GetContext_ReturnValue;
    params.CallFunc_GetBoolBP_ReturnValue = (bool)CallFunc_GetBoolBP_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    Result = params.Result;
}
bool UBP_SceneAction_TransformLightRig_C::HasNormalTick0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.HasNormalTick"));
    struct Params_HasNormalTick {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasNormalTick params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBP_SceneAction_TransformLightRig_C::GetActorListRecursive(AActor* Actor, TArray<AActor*>& ActorList, TArray<AActor*>& Result, TArray<AActor*> Local_Actor_List, TArray<UChildActorComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, UChildActorComponent* CallFunc_Array_Get_Item, int32_t Temp_int_Loop_Counter_Variable, TArray<AActor*>& CallFunc_GetActorListRecursive_Result, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.GetActorListRecursive"));
    struct Params_GetActorListRecursive {
        AActor* Actor; // 0x0
        TArray<AActor*> ActorList; // 0x8
        TArray<AActor*> Result; // 0x18
        TArray<AActor*> Local_Actor_List; // 0x28
        TArray<UChildActorComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x38
        int32_t Temp_int_Array_Index_Variable; // 0x48
        int32_t CallFunc_Array_Length_ReturnValue; // 0x4c
        UChildActorComponent* CallFunc_Array_Get_Item; // 0x50
        int32_t Temp_int_Loop_Counter_Variable; // 0x58
        char pad_5c[0x4];
        TArray<AActor*> CallFunc_GetActorListRecursive_Result; // 0x60
        bool CallFunc_Less_IntInt_ReturnValue; // 0x70
        char pad_71[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x74
        bool CallFunc_IsValid_ReturnValue; // 0x78
        char pad_79[0x3];
        int32_t CallFunc_Array_Add_ReturnValue; // 0x7c
        bool CallFunc_Array_Contains_ReturnValue; // 0x80
    }; // Size: 0x81
    Params_GetActorListRecursive params{};
    params.Actor = (AActor*)Actor;
    params.ActorList = (TArray<AActor*>)ActorList;
    params.Result = (TArray<AActor*>)Result;
    params.Local_Actor_List = (TArray<AActor*>)Local_Actor_List;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<UChildActorComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (UChildActorComponent*)CallFunc_Array_Get_Item;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_GetActorListRecursive_Result = (TArray<AActor*>)CallFunc_GetActorListRecursive_Result;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    ProcessEvent(func, &params);
    ActorList = params.ActorList;
    Result = params.Result;
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
    CallFunc_GetActorListRecursive_Result = params.CallFunc_GetActorListRecursive_Result;
}
void UBP_SceneAction_TransformLightRig_C::HideLightRig(bool HideActor, TArray<AActor*> EmptyArray, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UObject* CallFunc_GetActionObjectBP_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<AActor*>& CallFunc_GetActorListRecursive_Result, AActor* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.HideLightRig"));
    struct Params_HideLightRig {
        bool HideActor; // 0x0
        char pad_1[0x7];
        TArray<AActor*> EmptyArray; // 0x8
        bool CallFunc_Not_PreBool_ReturnValue; // 0x18
        char pad_19[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0x1c
        int32_t Temp_int_Loop_Counter_Variable; // 0x20
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x24
        UObject* CallFunc_GetActionObjectBP_ReturnValue; // 0x28
        AActor* K2Node_DynamicCast_AsActor; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        bool CallFunc_IsValid_ReturnValue; // 0x39
        char pad_3a[0x6];
        TArray<AActor*> CallFunc_GetActorListRecursive_Result; // 0x40
        AActor* CallFunc_Array_Get_Item; // 0x50
        int32_t CallFunc_Array_Length_ReturnValue; // 0x58
        char pad_5c[0x4];
        USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue; // 0x60
        bool CallFunc_Less_IntInt_ReturnValue; // 0x68
        bool CallFunc_IsValid_ReturnValue_1; // 0x69
    }; // Size: 0x6a
    Params_HideLightRig params{};
    params.HideActor = (bool)HideActor;
    params.EmptyArray = (TArray<AActor*>)EmptyArray;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetActionObjectBP_ReturnValue = (UObject*)CallFunc_GetActionObjectBP_ReturnValue;
    params.K2Node_DynamicCast_AsActor = (AActor*)K2Node_DynamicCast_AsActor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetActorListRecursive_Result = (TArray<AActor*>)CallFunc_GetActorListRecursive_Result;
    params.CallFunc_Array_Get_Item = (AActor*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_K2_GetRootComponent_ReturnValue = (USceneComponent*)CallFunc_K2_GetRootComponent_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GetActorListRecursive_Result = params.CallFunc_GetActorListRecursive_Result;
}
bool UBP_SceneAction_TransformLightRig_C::HasPostActorTick0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.HasPostActorTick"));
    struct Params_HasPostActorTick {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasPostActorTick params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UBP_SceneAction_TransformLightRig_C::GetSortOrder0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.GetSortOrder"));
    struct Params_GetSortOrder {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSortOrder params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UBP_SceneAction_TransformLightRig_C::OnEnterInterval0(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.OnEnterInterval"));
    struct Params_OnEnterInterval {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnEnterInterval params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void UBP_SceneAction_TransformLightRig_C::OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.OnExitInterval"));
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
void UBP_SceneAction_TransformLightRig_C::OnSetTimeInsideInterval0(float Time, float LocalTime, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.OnSetTimeInsideInterval"));
    struct Params_OnSetTimeInsideInterval {
        float Time; // 0x0
        float LocalTime; // 0x4
        bool IsScrubbing; // 0x8
    }; // Size: 0x9
    Params_OnSetTimeInsideInterval params{};
    params.Time = (float)Time;
    params.LocalTime = (float)LocalTime;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void UBP_SceneAction_TransformLightRig_C::OnCreate0(UObject* ActionState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.OnCreate"));
    struct Params_OnCreate {
        UObject* ActionState; // 0x0
    }; // Size: 0x8
    Params_OnCreate params{};
    params.ActionState = (UObject*)ActionState;
    ProcessEvent(func, &params);
}
void UBP_SceneAction_TransformLightRig_C::ExecuteUbergraph_BP_SceneAction_TransformLightRig(int32_t EntryPoint, bool CallFunc_IsRigVisible_Result, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_Time_2, bool K2Node_Event_IsScrubbing_2, float K2Node_Event_Time_1, bool K2Node_Event_Cancelled, bool K2Node_Event_IsScrubbing_1, UObject* CallFunc_GetActionObjectBP_ReturnValue, float K2Node_Event_Time, float K2Node_Event_LocalTime, bool K2Node_Event_IsScrubbing, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, UObject* K2Node_Event_ActionState, AActor* CallFunc_GetActiveSceneRigCamera_ReturnValue, UCameraFixupComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetTarget_bOutHasValidTarget, FVector CallFunc_GetTarget_ReturnValue, UCameraComponent* CallFunc_GetComponentByClass_ReturnValue_1, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/BP_SceneAction_TransformLightRig.BP_SceneAction_TransformLightRig_C.ExecuteUbergraph_BP_SceneAction_TransformLightRig"));
    struct Params_ExecuteUbergraph_BP_SceneAction_TransformLightRig {
        int32_t EntryPoint; // 0x0
        bool CallFunc_IsRigVisible_Result; // 0x4
        bool CallFunc_Not_PreBool_ReturnValue; // 0x5
        char pad_6[0x2];
        float K2Node_Event_Time_2; // 0x8
        bool K2Node_Event_IsScrubbing_2; // 0xc
        char pad_d[0x3];
        float K2Node_Event_Time_1; // 0x10
        bool K2Node_Event_Cancelled; // 0x14
        bool K2Node_Event_IsScrubbing_1; // 0x15
        char pad_16[0x2];
        UObject* CallFunc_GetActionObjectBP_ReturnValue; // 0x18
        float K2Node_Event_Time; // 0x20
        float K2Node_Event_LocalTime; // 0x24
        bool K2Node_Event_IsScrubbing; // 0x28
        char pad_29[0x7];
        AActor* K2Node_DynamicCast_AsActor; // 0x30
        bool K2Node_DynamicCast_bSuccess; // 0x38
        char pad_39[0x7];
        UObject* K2Node_Event_ActionState; // 0x40
        AActor* CallFunc_GetActiveSceneRigCamera_ReturnValue; // 0x48
        UCameraFixupComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x50
        bool CallFunc_IsValid_ReturnValue; // 0x58
        bool CallFunc_IsValid_ReturnValue_1; // 0x59
        bool CallFunc_GetTarget_bOutHasValidTarget; // 0x5a
        char pad_5b[0x1];
        FVector CallFunc_GetTarget_ReturnValue; // 0x5c
        UCameraComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x68
        FRotator CallFunc_K2_GetComponentRotation_ReturnValue; // 0x70
        bool CallFunc_IsValid_ReturnValue_2; // 0x7c
        char pad_7d[0x3];
        float CallFunc_BreakRotator_Roll; // 0x80
        float CallFunc_BreakRotator_Pitch; // 0x84
        float CallFunc_BreakRotator_Yaw; // 0x88
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x8c
        FRotator CallFunc_MakeRotator_ReturnValue; // 0x90
        FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x9c
        bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x124
    }; // Size: 0x125
    Params_ExecuteUbergraph_BP_SceneAction_TransformLightRig params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_IsRigVisible_Result = (bool)CallFunc_IsRigVisible_Result;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.K2Node_Event_Time_2 = (float)K2Node_Event_Time_2;
    params.K2Node_Event_IsScrubbing_2 = (bool)K2Node_Event_IsScrubbing_2;
    params.K2Node_Event_Time_1 = (float)K2Node_Event_Time_1;
    params.K2Node_Event_Cancelled = (bool)K2Node_Event_Cancelled;
    params.K2Node_Event_IsScrubbing_1 = (bool)K2Node_Event_IsScrubbing_1;
    params.CallFunc_GetActionObjectBP_ReturnValue = (UObject*)CallFunc_GetActionObjectBP_ReturnValue;
    params.K2Node_Event_Time = (float)K2Node_Event_Time;
    params.K2Node_Event_LocalTime = (float)K2Node_Event_LocalTime;
    params.K2Node_Event_IsScrubbing = (bool)K2Node_Event_IsScrubbing;
    params.K2Node_DynamicCast_AsActor = (AActor*)K2Node_DynamicCast_AsActor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_Event_ActionState = (UObject*)K2Node_Event_ActionState;
    params.CallFunc_GetActiveSceneRigCamera_ReturnValue = (AActor*)CallFunc_GetActiveSceneRigCamera_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCameraFixupComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetTarget_bOutHasValidTarget = (bool)CallFunc_GetTarget_bOutHasValidTarget;
    params.CallFunc_GetTarget_ReturnValue = (FVector)CallFunc_GetTarget_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (UCameraComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_K2_GetComponentRotation_ReturnValue = (FRotator)CallFunc_K2_GetComponentRotation_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = (FHitResult)CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
    params.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = (bool)CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
    ProcessEvent(func, &params);
}
