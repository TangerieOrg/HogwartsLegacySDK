#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class UInteractionArchitectAsset;
class UClass;
class APawn;
class AController;
class ABiped_PlayerController;
class UAchievementManager;
class ABiped_Player;
class UUIManager;
class UObjectStateInfo;
class UNPC_Component;
class UAnimInstance;
#pragma pack(push, 1)
class UBTT_Biped_CriticalFinisher_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    AActor* TargetActor; // 0x158
    TArray<UInteractionArchitectAsset*> MunitionDataAsset; // 0x160
    float TimeDilation; // 0x170
    bool AllowTimeDilation; // 0x174
    char pad_175[0x3];
    UClass* CriticalFinisherAbility; // 0x178
    FGameplayTagContainer MunitionTags; // 0x180
    TArray<AActor*> Exclude_List_Always; // 0x1a0
    TArray<AActor*> Exclude_List_Once; // 0x1b0
    static UBTT_Biped_CriticalFinisher_C* StaticClass();
    void AutoTargetOnlyTarget(APawn* Player, bool Flag, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess);
    void Enable_Auto_Target(ABiped_Player* BipedPlayer, bool Flag, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess);
    void ApplyAchievement(UAchievementManager* CallFunc_Get_ReturnValue, FName CallFunc_GetDbId_ReturnValue, bool CallFunc_ApplyOneOfEachInstance_ReturnValue);
    void EnableHUD(bool Flag, UUIManager* CallFunc_Get_ReturnValue);
    void DestroyAllMunitions(ABiped_Player* BipedPlayer);
    void ProtectCharacterFromDamage(AActor* InActor, bool Flag, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue);
    void GetAbilityAndTimeDilationFromNPC(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, float CallFunc_GetFinisherDamage_ReturnValue, bool CallFunc_FinisherWillKillTarget_ReturnValue, UNPC_Component* CallFunc_GetComponentByClass_ReturnValue, FGameplayTagContainer CallFunc_GetPlayerCriticalFinisherAbility_MunitionsTags, UClass* CallFunc_GetPlayerCriticalFinisherAbility_ReturnValue, bool CallFunc_CriticalFinisherAllowTimeDilation_ReturnValue, FGameplayTagContainer CallFunc_GetPlayerCriticalDamageAbility_MunitionsTags, UClass* CallFunc_GetPlayerCriticalDamageAbility_ReturnValue);
    AActor* GetTargetActor(APawn* BipedPlayer, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetBestAutoTargetActor_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, AActor* CallFunc_GetBestLockOnActor_ReturnValue);
    void SendMunitionImpactToTarget(float Damage, FName Temp_name_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_HasTag_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FHitResult CallFunc_MakeHitResult_ReturnValue, int32_t CallFunc_Array_AddUnique_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, bool CallFunc_SetOnFire_ReturnValue, FMunitionImpactData K2Node_MakeStruct_MunitionImpactData, bool CallFunc_SendMunitionImpactCombined_ReturnValue);
    void RestoreTimeDilation(bool CallFunc_IsValid_ReturnValue);
    void StartTimeDilationOnTarget(bool CallFunc_IsValid_ReturnValue);
    void SetTargetTrackers(AActor* InActor, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_Set_WandCast_TargetTrackerTargets_ReturnValue);
    void SetContexts(bool Flag);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireWand_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ApplyFinisherDamage_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireWandNoFinisherDamage_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireFinisherSpell_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_CriticalFinisher(int32_t EntryPoint, FName CallFunc_MakeLiteralName_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* K2Node_Event_OwnerActor_2, float K2Node_Event_DeltaSeconds);
}; // Size: 0x1c0
#pragma pack(pop)
