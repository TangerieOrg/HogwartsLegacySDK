#include "AActor.hpp"
#include "ABP_ObjectStateDiagnostics_C.hpp"
#include "APlayerCameraManager.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UObjectStateInfo.hpp"
#include "USceneComponent.hpp"
#include "UUI_BP_ObjectStateDiagnostics_C.hpp"
#include "UUserWidget.hpp"
#include "UWidgetComponent.hpp"
ABP_ObjectStateDiagnostics_C* ABP_ObjectStateDiagnostics_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Utilities/BP_ObjectStateDiagnostics.BP_ObjectStateDiagnostics_C");
    return (ABP_ObjectStateDiagnostics_C*)res;
}
void ABP_ObjectStateDiagnostics_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_ObjectStateDiagnostics.BP_ObjectStateDiagnostics_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_ObjectStateDiagnostics_C::ReceiveTick0(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_ObjectStateDiagnostics.BP_ObjectStateDiagnostics_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_ObjectStateDiagnostics_C::ExecuteUbergraph_BP_ObjectStateDiagnostics(int32_t EntryPoint, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UUI_BP_ObjectStateDiagnostics_C* K2Node_DynamicCast_AsUI_BP_Object_State_Diagnostics, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_GetCameraLocation_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_IsValid_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_ObjectStateDiagnostics.BP_ObjectStateDiagnostics_C.ExecuteUbergraph_BP_ObjectStateDiagnostics"));
    struct Params_ExecuteUbergraph_BP_ObjectStateDiagnostics {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue; // 0x8
        UUI_BP_ObjectStateDiagnostics_C* K2Node_DynamicCast_AsUI_BP_Object_State_Diagnostics; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x3];
        float K2Node_Event_DeltaSeconds; // 0x1c
        APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x28
        char pad_29[0x3];
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x2c
        FVector CallFunc_GetCameraLocation_ReturnValue; // 0x38
        FRotator CallFunc_FindLookAtRotation_ReturnValue; // 0x44
        AActor* CallFunc_GetParentActor_ReturnValue; // 0x50
        float CallFunc_BreakRotator_Roll; // 0x58
        float CallFunc_BreakRotator_Pitch; // 0x5c
        float CallFunc_BreakRotator_Yaw; // 0x60
        bool CallFunc_IsValid_ReturnValue_1; // 0x64
        char pad_65[0x3];
        FRotator CallFunc_MakeRotator_ReturnValue; // 0x68
        FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult; // 0x74
        char pad_fc[0x4];
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x100
    }; // Size: 0x108
    Params_ExecuteUbergraph_BP_ObjectStateDiagnostics params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetUserWidgetObject_ReturnValue = (UUserWidget*)CallFunc_GetUserWidgetObject_ReturnValue;
    params.K2Node_DynamicCast_AsUI_BP_Object_State_Diagnostics = (UUI_BP_ObjectStateDiagnostics_C*)K2Node_DynamicCast_AsUI_BP_Object_State_Diagnostics;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.CallFunc_GetPlayerCameraManager_ReturnValue = (APlayerCameraManager*)CallFunc_GetPlayerCameraManager_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_GetCameraLocation_ReturnValue = (FVector)CallFunc_GetCameraLocation_ReturnValue;
    params.CallFunc_FindLookAtRotation_ReturnValue = (FRotator)CallFunc_FindLookAtRotation_ReturnValue;
    params.CallFunc_GetParentActor_ReturnValue = (AActor*)CallFunc_GetParentActor_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_MakeRotator_ReturnValue = (FRotator)CallFunc_MakeRotator_ReturnValue;
    params.CallFunc_K2_SetWorldRotation_SweepHitResult = (FHitResult)CallFunc_K2_SetWorldRotation_SweepHitResult;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    ProcessEvent(func, &params);
}
