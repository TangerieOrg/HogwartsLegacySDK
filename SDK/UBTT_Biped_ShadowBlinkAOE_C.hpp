#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class UAnimInstance;
class UClass;
class ACharacter;
class ABiped_Player;
#pragma pack(push, 1)
class UBTT_Biped_ShadowBlinkAOE_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    bool IKRestoreState; // 0x158
    char pad_159[0x3];
    FVector LastDirection; // 0x15c
    FVector TeleportLocation; // 0x168
    FRotator TeleportRotation; // 0x174
    bool TeleportTest; // 0x180
    char pad_181[0x7];
    AActor* EnemyActor; // 0x188
    UClass* AbilityClass; // 0x190
    static UBTT_Biped_ShadowBlinkAOE_C* StaticClass();
    void FallingTest(bool& Falling, AActor* CallFunc_GetActorOwner_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireWand_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_ShadowBlinkAOE(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_2, float K2Node_Event_DeltaSeconds, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0x198
#pragma pack(pop)
