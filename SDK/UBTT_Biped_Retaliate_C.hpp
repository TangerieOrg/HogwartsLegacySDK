#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class ABiped_PlayerController;
class ASpellTool;
class AActor;
class UObject;
class UBlackboardComponent;
class ABiped_Player;
class AController;
class AEnemy_Character;
class AFinisherSpellTool;
class UGameLogicVar_Int32;
class UAnimInstance;
struct FMunitionImpactData;
class UAmbulatory_AnimInstance;
#pragma pack(push, 1)
class UBTT_Biped_Retaliate_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    ASpellTool* CurrentFiringSpell; // 0x158
    ASpellTool* EmptySpell; // 0x160
    bool SpellFired; // 0x168
    bool ButtonReleased; // 0x169
    bool RestoreIKState; // 0x16a
    char pad_16b[0x5];
    AActor* RetaliateVictim; // 0x170
    bool AllowStickMovement; // 0x178
    bool AllowTargetTracking; // 0x179
    char pad_17a[0x2];
    float GameTime; // 0x17c
    static UBTT_Biped_Retaliate_C* StaticClass();
    void GetInitialRetaliateVictim(ABiped_Player* BipedPlayer, AActor*& AsActor, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, AController* CallFunc_GetController_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* CallFunc_GetBestAutoTargetActor_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_2, AActor* CallFunc_GetLockedOnActor_ReturnValue, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_3);
    void AllowPickNewTarget(float MaxTimeIntoAttack, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AActor* CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, AController* CallFunc_GetController_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_FloatFloat_ReturnValue, AActor* CallFunc_GetBestAutoTargetActor_ReturnValue, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void DisableAimModeInFinisher(bool Flag, int32_t Delta, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AFinisherSpellTool* K2Node_DynamicCast_AsFinisher_Spell_Tool, bool K2Node_DynamicCast_bSuccess, UGameLogicVar_Int32* CallFunc_GetReferenceToInt32Variable_ReturnValue);
    void StickValid(float StickX, float StickY, bool& IsValid, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void SetContexts(bool Flag);
    void GetFinisherIndex(bool& Found, int32_t& FinisherIndex, AActor* CallFunc_GetActorOwner_ReturnValue, bool CallFunc_GetManagedContext_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, int32_t CallFunc_GetValueAsInt_ReturnValue);
    void StartWandAbility(AActor* InActor, FName CallFunc_MakeLiteralName_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireWand_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireSpellFlourish_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_CheckChannelAction_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Protego_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_PostFullBodyWandCast_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void SpellMadeContact(UObject* Caller, FMunitionImpactData& MunitionImpactData);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ObjectDestroyed(UObject* Caller);
    void ExecuteUbergraph_BTT_Biped_Retaliate(int32_t EntryPoint, AActor* CallFunc_GetActorOwner_ReturnValue, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue, bool CallFunc_GetContextOnActor_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetWorldDeltaSeconds_ReturnValue);
}; // Size: 0x180
#pragma pack(pop)
