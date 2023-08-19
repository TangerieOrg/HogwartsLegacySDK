#include "AActor.hpp"
#include "ABiped_Character.hpp"
#include "ACameraStackActor.hpp"
#include "ASpellTool.hpp"
#include "AWandTool.hpp"
#include "FBox2D.hpp"
#include "FCameraData.hpp"
#include "FVector2D.hpp"
#include "UBP_LookAt_InitialTransformationLock_C.hpp"
#include "UCameraStackBehaviorLookAt.hpp"
#include "UCameraStackTarget.hpp"
#include "UFunction.hpp"
#include "UTransformationSpellToolComponent.hpp"
bool UBP_LookAt_InitialTransformationLock_C::OnUpdateEvent(float DeltaSeconds, ACameraStackActor* CallFunc_GetOwner_ReturnValue, UCameraStackTarget* CallFunc_GetTarget_ReturnValue, AActor* CallFunc_GetTargetActor_ReturnValue, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess, AWandTool* CallFunc_GetWand_ReturnValue, ASpellTool* CallFunc_GetActiveSpellTool_ReturnValue, UTransformationSpellToolComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetTargetPointScreenPosition_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FBox2D CallFunc_MakeBox2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_LookAt_InitialTransformationLock.BP_LookAt_InitialTransformationLock_C.OnUpdateEvent"));
    struct Params_OnUpdateEvent {
        float DeltaSeconds; // 0x0
        bool ReturnValue; // 0x4
        char pad_5[0x3];
        ACameraStackActor* CallFunc_GetOwner_ReturnValue; // 0x8
        UCameraStackTarget* CallFunc_GetTarget_ReturnValue; // 0x10
        AActor* CallFunc_GetTargetActor_ReturnValue; // 0x18
        ABiped_Character* K2Node_DynamicCast_AsBiped_Character; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x7];
        AWandTool* CallFunc_GetWand_ReturnValue; // 0x30
        ASpellTool* CallFunc_GetActiveSpellTool_ReturnValue; // 0x38
        UTransformationSpellToolComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x40
        float CallFunc_GetTargetPointScreenPosition_ReturnValue; // 0x48
        bool CallFunc_IsValid_ReturnValue; // 0x4c
        char pad_4d[0x3];
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x50
        FVector2D CallFunc_MakeVector2D_ReturnValue_1; // 0x58
        FBox2D CallFunc_MakeBox2D_ReturnValue; // 0x60
    }; // Size: 0x74
    Params_OnUpdateEvent params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    params.CallFunc_GetOwner_ReturnValue = (ACameraStackActor*)CallFunc_GetOwner_ReturnValue;
    params.CallFunc_GetTarget_ReturnValue = (UCameraStackTarget*)CallFunc_GetTarget_ReturnValue;
    params.CallFunc_GetTargetActor_ReturnValue = (AActor*)CallFunc_GetTargetActor_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Character = (ABiped_Character*)K2Node_DynamicCast_AsBiped_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetWand_ReturnValue = (AWandTool*)CallFunc_GetWand_ReturnValue;
    params.CallFunc_GetActiveSpellTool_ReturnValue = (ASpellTool*)CallFunc_GetActiveSpellTool_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UTransformationSpellToolComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetTargetPointScreenPosition_ReturnValue = (float)CallFunc_GetTargetPointScreenPosition_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    params.CallFunc_MakeVector2D_ReturnValue_1 = (FVector2D)CallFunc_MakeVector2D_ReturnValue_1;
    params.CallFunc_MakeBox2D_ReturnValue = (FBox2D)CallFunc_MakeBox2D_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UBP_LookAt_InitialTransformationLock_C::OnGetDebugStatsEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_LookAt_InitialTransformationLock.BP_LookAt_InitialTransformationLock_C.OnGetDebugStatsEvent"));
    struct Params_OnGetDebugStatsEvent {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_OnGetDebugStatsEvent params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
UBP_LookAt_InitialTransformationLock_C* UBP_LookAt_InitialTransformationLock_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_LookAt_InitialTransformationLock.BP_LookAt_InitialTransformationLock_C");
    return (UBP_LookAt_InitialTransformationLock_C*)res;
}
bool UBP_LookAt_InitialTransformationLock_C::OnActivateEvent(ACameraStackActor* CallFunc_GetOwner_ReturnValue, UCameraStackTarget* CallFunc_GetTarget_ReturnValue, AActor* CallFunc_GetTargetActor_ReturnValue, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess, AWandTool* CallFunc_GetWand_ReturnValue, ASpellTool* CallFunc_GetActiveSpellTool_ReturnValue, UTransformationSpellToolComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetTargetPointScreenPosition_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FBox2D CallFunc_MakeBox2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_LookAt_InitialTransformationLock.BP_LookAt_InitialTransformationLock_C.OnActivateEvent"));
    struct Params_OnActivateEvent {
        bool ReturnValue; // 0x0
        char pad_1[0x7];
        ACameraStackActor* CallFunc_GetOwner_ReturnValue; // 0x8
        UCameraStackTarget* CallFunc_GetTarget_ReturnValue; // 0x10
        AActor* CallFunc_GetTargetActor_ReturnValue; // 0x18
        ABiped_Character* K2Node_DynamicCast_AsBiped_Character; // 0x20
        bool K2Node_DynamicCast_bSuccess; // 0x28
        char pad_29[0x7];
        AWandTool* CallFunc_GetWand_ReturnValue; // 0x30
        ASpellTool* CallFunc_GetActiveSpellTool_ReturnValue; // 0x38
        UTransformationSpellToolComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x40
        float CallFunc_GetTargetPointScreenPosition_ReturnValue; // 0x48
        bool CallFunc_IsValid_ReturnValue; // 0x4c
        char pad_4d[0x3];
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x50
        FVector2D CallFunc_MakeVector2D_ReturnValue_1; // 0x58
        FBox2D CallFunc_MakeBox2D_ReturnValue; // 0x60
    }; // Size: 0x74
    Params_OnActivateEvent params{};
    params.CallFunc_GetOwner_ReturnValue = (ACameraStackActor*)CallFunc_GetOwner_ReturnValue;
    params.CallFunc_GetTarget_ReturnValue = (UCameraStackTarget*)CallFunc_GetTarget_ReturnValue;
    params.CallFunc_GetTargetActor_ReturnValue = (AActor*)CallFunc_GetTargetActor_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Character = (ABiped_Character*)K2Node_DynamicCast_AsBiped_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetWand_ReturnValue = (AWandTool*)CallFunc_GetWand_ReturnValue;
    params.CallFunc_GetActiveSpellTool_ReturnValue = (ASpellTool*)CallFunc_GetActiveSpellTool_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UTransformationSpellToolComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetTargetPointScreenPosition_ReturnValue = (float)CallFunc_GetTargetPointScreenPosition_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    params.CallFunc_MakeVector2D_ReturnValue_1 = (FVector2D)CallFunc_MakeVector2D_ReturnValue_1;
    params.CallFunc_MakeBox2D_ReturnValue = (FBox2D)CallFunc_MakeBox2D_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBP_LookAt_InitialTransformationLock_C::OnWriteCameraDataEvent(FCameraData& CameraData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/Behaviors/BP_LookAt_InitialTransformationLock.BP_LookAt_InitialTransformationLock_C.OnWriteCameraDataEvent"));
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
