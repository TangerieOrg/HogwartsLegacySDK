#pragma once
#include <cstdint>
#include "ECollisionResponse.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class ASpellTool;
class ABiped_Character;
class AController;
class ALumosSpellTool;
class AWandTool;
class AChannelingSpellTool;
class AActor;
class ABiped_Player;
class ABiped_PlayerController;
class UBiped_AnimInstance;
class UBlackboardComponent;
class ACharacter;
class UAnimInstance;
class UAmbulatory_AnimInstance;
class UObject;
class APawn;
#pragma pack(push, 1)
class UBTT_Biped_DodgeStart_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    float StickMag; // 0x158
    bool OnButtslideSurface; // 0x15c
    bool UseDodgeCamera; // 0x15d
    char pad_15e[0x2];
    float invulnerableTime; // 0x160
    FVector StartingLocation; // 0x164
    FTimerHandle BlinkTimer; // 0x170
    bool Blinking; // 0x178
    bool IsInterruptible; // 0x179
    char pad_17a[0x2];
    FVector LastDirection; // 0x17c
    bool DodgedUnblockable; // 0x188
    bool autoFireAfterDodge; // 0x189
    char pad_18a[0x2];
    int32_t autoFireSpellSlot; // 0x18c
    FTimerHandle AimAtTimerHandle; // 0x190
    FTimerHandle LockTimerHandle; // 0x198
    static UBTT_Biped_DodgeStart_C* StaticClass();
    void CancelChannelSpell(ABiped_Character* BipedCharacter, AWandTool* CallFunc_GetWand_ReturnValue, ASpellTool* CallFunc_GetActiveSpellTool_ReturnValue, AChannelingSpellTool* K2Node_DynamicCast_AsChanneling_Spell_Tool, bool K2Node_DynamicCast_bSuccess, ALumosSpellTool* K2Node_DynamicCast_AsLumos_Spell_Tool, bool K2Node_DynamicCast_bSuccess_1);
    void FlushQueuedActions(AActor* Owner);
    void UnlockTarget(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess);
    void LockTarget(bool Condition, AActor* InTargetActor, ABiped_Player* NewLocalVar_2, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess);
    void CheckForAutoFireAfterDodge(FVariantMapHandle NewLocalVar_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UBiped_AnimInstance* CallFunc_GetBipedAnimInstance_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, int32_t CallFunc_GetValueAsInt_ReturnValue, FVariantMapHandle K2Node_MakeStruct_VariantMapHandle, bool CallFunc_GetVariantBool_FromHandle_bFound, bool CallFunc_GetVariantBool_FromHandle_ReturnValue, bool CallFunc_GetVariantFVector_FromHandle_bFound, FVector CallFunc_GetVariantFVector_FromHandle_ReturnValue, bool CallFunc_GetVariantInt32_FromHandle_bFound, int32_t CallFunc_GetVariantInt32_FromHandle_ReturnValue);
    void FallingTest(bool& Falling, AActor* CallFunc_GetActorOwner_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess);
    void Stop(UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
    void ToggleDamageCollision(ECollisionResponse CollisionResponse, AActor* OwnerActor, AActor* NewLocalVar_0);
    void SetContexts(bool Flag);
    void ToggleLockOnCamera(UObject* Object, bool Allowed, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess_1);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_MakeInterruptible_Move_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ToggleDodgeCamera_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_MakeInterruptible_FullBodySpellCast_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void BlinkTimerExpired();
    void AimAtTimerExpired();
    void ReceiveExecute(AActor* OwnerActor);
    void LockTargetTimerExpired();
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_DodgeStart(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_4, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
}; // Size: 0x1a0
#pragma pack(pop)
