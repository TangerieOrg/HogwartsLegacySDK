#pragma once
#include <cstdint>
#include "EMovementMode.hpp"
#include "ETargetSpeedMode\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class ABiped_Player;
class ACharacter;
class AActor;
#pragma pack(push, 1)
class UBTT_Biped_JumpLand_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    FTimerHandle CheckMovementModeTimer; // 0x158
    bool Landed; // 0x160
    char pad_161[0x3];
    float JumpCooldownTime; // 0x164
    bool AnimComplete; // 0x168
    char pad_169[0x7];
    static UBTT_Biped_JumpLand_C* StaticClass();
    void isSprinting(bool& Flag, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsUsingSpeedModifier_ReturnValue, ETargetSpeedMode::Type CallFunc_GetTargetSpeedModifier_OutState, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void Exit(AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMoveStickValues_X, float CallFunc_GetMoveStickValues_Y, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void CheckMovementMode();
    void MovementModeChanged(ACharacter* Character, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode);
    void ExecuteUbergraph_BTT_Biped_JumpLand(int32_t EntryPoint, bool CallFunc_IsSprinting_Flag, AActor* K2Node_Event_OwnerActor_2);
}; // Size: 0x170
#pragma pack(pop)
