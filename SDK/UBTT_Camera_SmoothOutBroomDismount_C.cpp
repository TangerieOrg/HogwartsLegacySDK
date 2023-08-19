#include "AActor.hpp"
#include "ACameraStackActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTT_Camera_SmoothOutBroomDismount_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UCameraStack.hpp"
#include "UCameraStackBehavior.hpp"
#include "UCameraStackBehaviorAdjustArmFromTargetVelocity.hpp"
#include "UFunction.hpp"
UBTT_Camera_SmoothOutBroomDismount_C* UBTT_Camera_SmoothOutBroomDismount_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/BehaviorTree/Tasks/BTT_Camera_SmoothOutBroomDismount.BTT_Camera_SmoothOutBroomDismount_C");
    return (UBTT_Camera_SmoothOutBroomDismount_C*)res;
}
void UBTT_Camera_SmoothOutBroomDismount_C::ReceiveExecute0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/BehaviorTree/Tasks/BTT_Camera_SmoothOutBroomDismount.BTT_Camera_SmoothOutBroomDismount_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_Camera_SmoothOutBroomDismount_C::ExecuteUbergraph_BTT_Camera_SmoothOutBroomDismount(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, AActor* K2Node_Event_OwnerActor, ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor, bool K2Node_DynamicCast_bSuccess, UCameraStack* CallFunc_GetBehaviors_ReturnValue, TArray<UCameraStackBehavior*>& CallFunc_GetBehaviorsWithType_ReturnValue, TArray<UCameraStackBehavior*>& CallFunc_GetBehaviorsWithType_ReturnValue_1, UCameraStackBehavior* CallFunc_Array_Get_Item, UCameraStackBehavior* CallFunc_Array_Get_Item_1, bool CallFunc_DisableBehavior_ReturnValue, UCameraStackBehaviorAdjustArmFromTargetVelocity* K2Node_DynamicCast_AsAdjust_Arm_from_Target_Velocity, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/BehaviorTree/Tasks/BTT_Camera_SmoothOutBroomDismount.BTT_Camera_SmoothOutBroomDismount_C.ExecuteUbergraph_BTT_Camera_SmoothOutBroomDismount"));
    struct Params_ExecuteUbergraph_BTT_Camera_SmoothOutBroomDismount {
        int32_t EntryPoint; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t Temp_int_Array_Index_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x10
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x14
        int32_t Temp_int_Array_Index_Variable_1; // 0x18
        char pad_1c[0x4];
        AActor* K2Node_Event_OwnerActor; // 0x20
        ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
        char pad_31[0x7];
        UCameraStack* CallFunc_GetBehaviors_ReturnValue; // 0x38
        TArray<UCameraStackBehavior*> CallFunc_GetBehaviorsWithType_ReturnValue; // 0x40
        TArray<UCameraStackBehavior*> CallFunc_GetBehaviorsWithType_ReturnValue_1; // 0x50
        UCameraStackBehavior* CallFunc_Array_Get_Item; // 0x60
        UCameraStackBehavior* CallFunc_Array_Get_Item_1; // 0x68
        bool CallFunc_DisableBehavior_ReturnValue; // 0x70
        char pad_71[0x7];
        UCameraStackBehaviorAdjustArmFromTargetVelocity* K2Node_DynamicCast_AsAdjust_Arm_from_Target_Velocity; // 0x78
        bool K2Node_DynamicCast_bSuccess_1; // 0x80
        char pad_81[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x84
        bool CallFunc_Less_IntInt_ReturnValue; // 0x88
        char pad_89[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x8c
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x90
    }; // Size: 0x91
    Params_ExecuteUbergraph_BTT_Camera_SmoothOutBroomDismount params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_DynamicCast_AsCamera_Stack_Actor = (ACameraStackActor*)K2Node_DynamicCast_AsCamera_Stack_Actor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetBehaviors_ReturnValue = (UCameraStack*)CallFunc_GetBehaviors_ReturnValue;
    params.CallFunc_GetBehaviorsWithType_ReturnValue = (TArray<UCameraStackBehavior*>)CallFunc_GetBehaviorsWithType_ReturnValue;
    params.CallFunc_GetBehaviorsWithType_ReturnValue_1 = (TArray<UCameraStackBehavior*>)CallFunc_GetBehaviorsWithType_ReturnValue_1;
    params.CallFunc_Array_Get_Item = (UCameraStackBehavior*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (UCameraStackBehavior*)CallFunc_Array_Get_Item_1;
    params.CallFunc_DisableBehavior_ReturnValue = (bool)CallFunc_DisableBehavior_ReturnValue;
    params.K2Node_DynamicCast_AsAdjust_Arm_from_Target_Velocity = (UCameraStackBehaviorAdjustArmFromTargetVelocity*)K2Node_DynamicCast_AsAdjust_Arm_from_Target_Velocity;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GetBehaviorsWithType_ReturnValue = params.CallFunc_GetBehaviorsWithType_ReturnValue;
    CallFunc_GetBehaviorsWithType_ReturnValue_1 = params.CallFunc_GetBehaviorsWithType_ReturnValue_1;
}
