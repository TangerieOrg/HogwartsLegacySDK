#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class ACameraStackActor;
class UCameraStack;
class UCameraStackBehavior;
class UCameraStackBehaviorAdjustArmFromTargetVelocity;
#pragma pack(push, 1)
class UBTT_Camera_SmoothOutBroomDismount_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    static UBTT_Camera_SmoothOutBroomDismount_C* StaticClass();
    void ReceiveExecute0(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Camera_SmoothOutBroomDismount(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, AActor* K2Node_Event_OwnerActor, ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor, bool K2Node_DynamicCast_bSuccess, UCameraStack* CallFunc_GetBehaviors_ReturnValue, TArray<UCameraStackBehavior*>& CallFunc_GetBehaviorsWithType_ReturnValue, TArray<UCameraStackBehavior*>& CallFunc_GetBehaviorsWithType_ReturnValue_1, UCameraStackBehavior* CallFunc_Array_Get_Item, UCameraStackBehavior* CallFunc_Array_Get_Item_1, bool CallFunc_DisableBehavior_ReturnValue, UCameraStackBehaviorAdjustArmFromTargetVelocity* K2Node_DynamicCast_AsAdjust_Arm_from_Target_Velocity, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
}; // Size: 0xb0
#pragma pack(pop)
