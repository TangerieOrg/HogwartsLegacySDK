#include "AActor.hpp"
#include "ACameraStackActor.hpp"
#include "ACharacter.hpp"
#include "FCameraData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBP_OffsetCamera_WhileMoving_C.hpp"
#include "UCameraStackBehaviorAddCameraSpaceTranslation.hpp"
#include "UCameraStackTarget.hpp"
#include "UFunction.hpp"
void UBP_OffsetCamera_WhileMoving_C::ExecuteUbergraph_BP_OffsetCamera_WhileMoving(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_OffsetCamera_WhileMoving.BP_OffsetCamera_WhileMoving_C.ExecuteUbergraph_BP_OffsetCamera_WhileMoving"));
    struct Params_ExecuteUbergraph_BP_OffsetCamera_WhileMoving {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_OffsetCamera_WhileMoving params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
UBP_OffsetCamera_WhileMoving_C* UBP_OffsetCamera_WhileMoving_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_OffsetCamera_WhileMoving.BP_OffsetCamera_WhileMoving_C");
    return (UBP_OffsetCamera_WhileMoving_C*)res;
}
bool UBP_OffsetCamera_WhileMoving_C::OnActivateEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_OffsetCamera_WhileMoving.BP_OffsetCamera_WhileMoving_C.OnActivateEvent"));
    struct Params_OnActivateEvent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_OnActivateEvent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UBP_OffsetCamera_WhileMoving_C::OnGetDebugStatsEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_OffsetCamera_WhileMoving.BP_OffsetCamera_WhileMoving_C.OnGetDebugStatsEvent"));
    struct Params_OnGetDebugStatsEvent {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_OnGetDebugStatsEvent params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UBP_OffsetCamera_WhileMoving_C::OnUpdateEvent(float DeltaSeconds, bool Temp_bool_Variable, bool Temp_bool_Variable_1, ACameraStackActor* CallFunc_GetOwner_ReturnValue, UCameraStackTarget* CallFunc_GetTarget_ReturnValue, AActor* CallFunc_GetTargetActor_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsMovingOnGround_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector K2Node_Select_Default, float K2Node_Select_Default_1, FVector CallFunc_VInterpTo_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_OffsetCamera_WhileMoving.BP_OffsetCamera_WhileMoving_C.OnUpdateEvent"));
    struct Params_OnUpdateEvent {
        float DeltaSeconds; // 0x0
        bool ReturnValue; // 0x4
        bool Temp_bool_Variable; // 0x5
        bool Temp_bool_Variable_1; // 0x6
        char pad_7[0x1];
        ACameraStackActor* CallFunc_GetOwner_ReturnValue; // 0x8
        UCameraStackTarget* CallFunc_GetTarget_ReturnValue; // 0x10
        AActor* CallFunc_GetTargetActor_ReturnValue; // 0x18
        ACharacter* K2Node_DynamicCast_AsCharacter; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        bool CallFunc_IsMovingOnGround_ReturnValue; // 0x29
        char pad_2a[0x2];
        float CallFunc_VSize_ReturnValue; // 0x2c
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x30
        bool CallFunc_BooleanAND_ReturnValue; // 0x31
        char pad_32[0x2];
        FVector K2Node_Select_Default; // 0x34
        float K2Node_Select_Default_1; // 0x40
        FVector CallFunc_VInterpTo_ReturnValue; // 0x44
    }; // Size: 0x50
    Params_OnUpdateEvent params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.CallFunc_GetOwner_ReturnValue = (ACameraStackActor*)CallFunc_GetOwner_ReturnValue;
    params.CallFunc_GetTarget_ReturnValue = (UCameraStackTarget*)CallFunc_GetTarget_ReturnValue;
    params.CallFunc_GetTargetActor_ReturnValue = (AActor*)CallFunc_GetTargetActor_ReturnValue;
    params.K2Node_DynamicCast_AsCharacter = (ACharacter*)K2Node_DynamicCast_AsCharacter;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_IsMovingOnGround_ReturnValue = (bool)CallFunc_IsMovingOnGround_ReturnValue;
    params.CallFunc_VSize_ReturnValue = (float)CallFunc_VSize_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.K2Node_Select_Default = (FVector)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (float)K2Node_Select_Default_1;
    params.CallFunc_VInterpTo_ReturnValue = (FVector)CallFunc_VInterpTo_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBP_OffsetCamera_WhileMoving_C::OnWriteCameraDataEvent(FCameraData& CameraData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_OffsetCamera_WhileMoving.BP_OffsetCamera_WhileMoving_C.OnWriteCameraDataEvent"));
    struct Params_OnWriteCameraDataEvent {
        FCameraData CameraData; // 0x0
        bool ReturnValue; // 0xb0
    }; // Size: 0xb1
    Params_OnWriteCameraDataEvent params{};
    params.CameraData = (FCameraData)CameraData;
    ProcessEvent(func, &params);
    CameraData = params.CameraData;
    return (bool)params.ReturnValue;
}
