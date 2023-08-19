#pragma once
#include <cstdint>
#include "EPhysicalSurface.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class UAmbulatory_MovementComponent;
class AActor;
#pragma pack(push, 1)
class UBTT_Biped_Slide_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    FTimerHandle ButtslideSurfaceTimer; // 0x158
    UAmbulatory_MovementComponent* AmbulatoryMovementComponent; // 0x160
    bool SlideBySurfaceType; // 0x168
    EPhysicalSurface CurrentSurfaceType; // 0x169
    char pad_16a[0x6];
    static UBTT_Biped_Slide_C* StaticClass();
    void InpActEvt_JumpButton_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void SpawnRock();
    void TimerComplete();
    void ExitTask(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecute(AActor* OwnerActor);
    void AllowJumping();
    void ExecuteUbergraph_BTT_Biped_Slide(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, bool CallFunc_GetVariantInt32_FromHandle_bFound, int32_t CallFunc_GetVariantInt32_FromHandle_ReturnValue);
}; // Size: 0x170
#pragma pack(pop)
