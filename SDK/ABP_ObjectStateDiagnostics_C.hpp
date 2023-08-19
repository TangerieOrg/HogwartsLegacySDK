#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UWidgetComponent;
class UUserWidget;
class USceneComponent;
class APlayerCameraManager;
class UUI_BP_ObjectStateDiagnostics_C;
class UObjectStateInfo;
#pragma pack(push, 1)
class ABP_ObjectStateDiagnostics_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UWidgetComponent* Widget; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    static ABP_ObjectStateDiagnostics_C* StaticClass();
    void ReceiveBeginPlay0();
    void ReceiveTick0(float DeltaSeconds);
    void ExecuteUbergraph_BP_ObjectStateDiagnostics(int32_t EntryPoint, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UUI_BP_ObjectStateDiagnostics_C* K2Node_DynamicCast_AsUI_BP_Object_State_Diagnostics, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_GetCameraLocation_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, AActor* CallFunc_GetParentActor_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_IsValid_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue);
}; // Size: 0x260
#pragma pack(pop)
