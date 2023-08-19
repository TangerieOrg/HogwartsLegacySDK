#pragma once
#include <cstdint>
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "USceneAction_Blueprint.hpp"
class UBoolProvider;
class UObject;
class AActor;
class UChildActorComponent;
class USceneComponent;
class UCameraFixupComponent;
class UCameraComponent;
#pragma pack(push, 1)
class UBP_SceneAction_TransformLightRig_C : public USceneAction_Blueprint {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    UBoolProvider* RigVisible; // 0xb0
    static UBP_SceneAction_TransformLightRig_C* StaticClass();
    void IsRigVisible(bool& Result, UObject* CallFunc_GetContext_ReturnValue, bool CallFunc_GetBoolBP_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void GetActorListRecursive(AActor* Actor, TArray<AActor*>& ActorList, TArray<AActor*>& Result, TArray<AActor*> Local_Actor_List, TArray<UChildActorComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, UChildActorComponent* CallFunc_Array_Get_Item, int32_t Temp_int_Loop_Counter_Variable, TArray<AActor*>& CallFunc_GetActorListRecursive_Result, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
    void HideLightRig(bool HideActor, TArray<AActor*> EmptyArray, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UObject* CallFunc_GetActionObjectBP_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<AActor*>& CallFunc_GetActorListRecursive_Result, AActor* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    bool HasPostActorTick0();
    bool HasNormalTick0();
    float GetSortOrderPostActorTick0();
    float GetSortOrder0();
    void OnEnterInterval0(float Time, bool IsScrubbing);
    void OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing);
    void OnSetTimeInsideInterval0(float Time, float LocalTime, bool IsScrubbing);
    void OnCreate0(UObject* ActionState);
    void ExecuteUbergraph_BP_SceneAction_TransformLightRig(int32_t EntryPoint, bool CallFunc_IsRigVisible_Result, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_Time_2, bool K2Node_Event_IsScrubbing_2, float K2Node_Event_Time_1, bool K2Node_Event_Cancelled, bool K2Node_Event_IsScrubbing_1, UObject* CallFunc_GetActionObjectBP_ReturnValue, float K2Node_Event_Time, float K2Node_Event_LocalTime, bool K2Node_Event_IsScrubbing, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, UObject* K2Node_Event_ActionState, AActor* CallFunc_GetActiveSceneRigCamera_ReturnValue, UCameraFixupComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetTarget_bOutHasValidTarget, FVector CallFunc_GetTarget_ReturnValue, UCameraComponent* CallFunc_GetComponentByClass_ReturnValue_1, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue);
}; // Size: 0xb8
#pragma pack(pop)
