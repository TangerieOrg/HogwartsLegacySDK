#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "USceneAction_Blueprint.hpp"
class UMeshComponent;
class UObject;
class UStaticMeshComponent;
class AActor;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class UBP_SceneAction_SetMeshComponentVisibility_C : public USceneAction_Blueprint {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    bool Visible; // 0xb0
    bool ResetOnActionEnd; // 0xb1
    bool PropagateToChildren; // 0xb2
    char pad_b3[0x1];
    FName ComponentTag; // 0xb4
    char pad_bc[0x4];
    TArray<bool> PreviousVisiblity; // 0xc0
    TArray<UMeshComponent*> MeshComponents; // 0xd0
    static UBP_SceneAction_SetMeshComponentVisibility_C* StaticClass();
    bool IsInstant0(bool CallFunc_Not_PreBool_ReturnValue);
    void OnEnterInterval0(float Time, bool IsScrubbing);
    void OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing);
    void OnInstant0(float Time, bool IsScrubbing);
    void ExecuteUbergraph_BP_SceneAction_SetMeshComponentVisibility(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, UObject* CallFunc_GetActionObjectBP_ReturnValue, float K2Node_Event_Time_2, bool K2Node_Event_IsScrubbing_2, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_Time_1, bool K2Node_Event_Cancelled, bool K2Node_Event_IsScrubbing_1, TArray<UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, TArray<USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, UMeshComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UObject* CallFunc_GetActionObjectBP_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, AActor* K2Node_DynamicCast_AsActor_1, bool K2Node_DynamicCast_bSuccess_1, TArray<UStaticMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue, TArray<USkeletalMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, float K2Node_Event_Time, bool K2Node_Event_IsScrubbing, int32_t Temp_int_Array_Index_Variable_1, UMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_IsVisible_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue);
}; // Size: 0xe0
#pragma pack(pop)
