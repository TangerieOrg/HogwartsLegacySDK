#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class ABiped_PlayerController;
class ASpellTool;
class AActor;
class AReparoSpellTool;
class UObjectStateInfo;
class ABiped_Player;
class AController;
class UTargetTypeBase;
class UClass;
class UObject;
struct FMunitionImpactData;
#pragma pack(push, 1)
class UBTT_Biped_WandCast_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    ASpellTool* CurrentFiringSpell; // 0x158
    ASpellTool* EmptySpell; // 0x160
    bool SpellFired; // 0x168
    bool ButtonReleased; // 0x169
    bool RestoreIKState; // 0x16a
    bool RestartingWandCast; // 0x16b
    bool ClearRetaliateLockOnExit; // 0x16c
    bool AnimCompleted; // 0x16d
    bool AllowStick; // 0x16e
    char pad_16f[0x1];
    FVector StickDirection; // 0x170
    bool AllowAcquireNewTarget; // 0x17c
    bool AllowTargetTracking; // 0x17d
    bool IsOppugnoSpell; // 0x17e
    char pad_17f[0x1];
    AActor* TargetedEnemy; // 0x180
    static UBTT_Biped_WandCast_C* StaticClass();
    void ProtectCharacterFromDamage(AActor* InActor, bool Flag, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue);
    void AcquireNewTarget(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue, UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue_1, AController* CallFunc_GetController_ReturnValue, UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue_2, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetBestAutoTargetActor_ReturnValue, FVector CallFunc_GetBestAutoTargetActor_WorldLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue);
    void FlushQueuedActions(AActor* Owner);
    void ConditionalCancelSpell(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AReparoSpellTool* K2Node_DynamicCast_AsReparo_Spell_Tool, bool K2Node_DynamicCast_bSuccess);
    void SetTargetTrackers(AActor* InputPin, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue, AActor* CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue, UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue_1, UTargetTypeBase* CallFunc_AddTarget_DesiredDirection_ReturnValue_2);
    void StickValid(float StickX, float StickY, bool& IsValid, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void SetContexts(bool Flag);
    void StartWandAbility(AActor* InActor, UClass* DefaultAbility, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess);
    void GetWandAbility(FName WandCastName, bool IsInStealth, UClass*& WandCastAbility, UClass* CallFunc_GetExecutionClassFromKeyWord_ReturnValue, UClass* CallFunc_GetExecutionClassFromKeyWord_ReturnValue_1, UClass* CallFunc_GetExecutionClassFromKeyWord_ReturnValue_2, FString CallFunc_GetClassDisplayName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
    void CustActionEvt_FireWand_K2Node_BTCustomActionEvent_9(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireWand_K2Node_BTCustomActionEvent_8(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_7(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_PostFullBodyWandCast_K2Node_BTCustomActionEvent_6(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ConjureMotionCommand_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireSpellFlourish_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Protego_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void SpellMadeContact(UObject* Caller, FMunitionImpactData& MunitionImpactData);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_WandCast(int32_t EntryPoint, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1);
}; // Size: 0x188
#pragma pack(pop)
