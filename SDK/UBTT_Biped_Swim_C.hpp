#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class UAnimInstance;
class AActor;
class UAmbulatory_AnimInstance;
class APlayerController;
#pragma pack(push, 1)
class UBTT_Biped_Swim_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    bool StickPressed; // 0x158
    char pad_159[0x3];
    float StickReleasedTime; // 0x15c
    FVector DesiredWorldDirection; // 0x160
    float DesiredWorldSpeed; // 0x16c
    float StickMinTime; // 0x170
    bool Moving; // 0x174
    bool StickNudgeLoop; // 0x175
    char pad_176[0x2];
    FTimerHandle TutorialTimerHandle; // 0x178
    static UBTT_Biped_Swim_C* StaticClass();
    void Stop(uint8_t CallFunc_MakeLiteralByte_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_BlockedByWall_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void TutorialTimerExpired();
    void ExecuteUbergraph_BTT_Biped_Swim(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess, APlayerController* CallFunc_GetPlayerController_ReturnValue);
}; // Size: 0x180
#pragma pack(pop)
