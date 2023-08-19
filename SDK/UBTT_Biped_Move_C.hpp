#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class UObject;
class UCurveFloat;
class AActor;
class UAnimInstance;
#pragma pack(push, 1)
class UBTT_Biped_Move_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    UObject* IKFootPlacementComponent; // 0x158
    float LastDodgeTime; // 0x160
    float DodgeCoolDownTime; // 0x164
    bool StickPressed; // 0x168
    char pad_169[0x3];
    float StickReleaseMinTime; // 0x16c
    float StickReleasedTime; // 0x170
    FVector DesiredWorldDirection; // 0x174
    float DesiredWorldSpeed; // 0x180
    char pad_184[0x4];
    UCurveFloat* SpeedGovernor; // 0x188
    static UBTT_Biped_Move_C* StaticClass();
    void StickValid(float StickX, float StickY, bool& IsValid, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void CustActionEvt_BlockedByWall_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTT_Biped_Move(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds);
}; // Size: 0x190
#pragma pack(pop)
