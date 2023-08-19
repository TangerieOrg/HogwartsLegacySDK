#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class UAnimInstance;
class AAmbulatory_Character;
class ABiped_Player;
class UAmbulatory_AnimInstance;
class UAmbulatory_MovementComponent;
class ABiped_Character;
#pragma pack(push, 1)
class UBTT_Biped_Fall_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    float HeightAtFallStart; // 0x158
    FVector DesiredWorldDirection; // 0x15c
    static UBTT_Biped_Fall_C* StaticClass();
    void ExecuteFall(AActor* OwnerActor, AAmbulatory_Character* K2Node_DynamicCast_AsAmbulatory_Character, bool K2Node_DynamicCast_bSuccess, UAmbulatory_MovementComponent* CallFunc_GetComponentByClass_ReturnValue);
    void CustActionEvt_Landed_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void OnCharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_Fall(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* K2Node_Event_OwnerActor_2, float K2Node_Event_DeltaSeconds, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess_1);
}; // Size: 0x168
#pragma pack(pop)
