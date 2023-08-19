#pragma once
#include <cstdint>
#include "EBTCustomActionType\Type.hpp"
#include "EInputDeviceUsed.hpp"
#include "EKnowledgeLevel.hpp"
#include "ELandingType\Type.hpp"
#include "EMovementMode.hpp"
#include "ESpeedModifierType\Type.hpp"
#include "EUIQActionBarType.hpp"
#include "FDamageInfo.hpp"
#include "FGameplayTagContainer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTService_AvaAITree_Input.hpp"
class UUI_BP_GadgetWheel_C;
class UAblAbilityContext;
class APawn;
class UClass;
class AActor;
class ABiped_Player;
class AAmbulatory_Character;
class ABP_StealthTakedownInteractActor_C;
class AWandTool;
class APlayerController;
class UCombativePlantComponent;
class ABiped_PlayerController;
class AController;
class ASimpleInteractObject;
class AInventoryObject;
class UBlackboardComponent;
class ANPC_Character;
struct FMunitionImpactData;
class ULootDropComponent;
class AForagable;
class AHerb;
class UKnowledgeManager;
class UObject;
class UActorComponent;
class UCognitionStimuliSourceComponent;
class ACameraStackLookAtTargetActor;
class AWorldObject;
class UParticleSystemComponent;
class ACharacter;
class ABase_Character;
class UUIManager;
class UTutorialSystem;
class AHUD;
class APhoenixHUD;
class UUI_BP_PhoenixHUDWidget_C;
class UCreature_RiderComponent;
class UAnimInstance;
class UGameLogicObject;
class UCognitionComponent;
class UObjectStateInfo;
class UAmbulatory_AnimInstance;
class ATool;
struct FForcedConversation;
class AInventoryItemTool;
class ABiped_Character;
class UAISense;
struct FSurfaceTypeChanged;
#pragma pack(push, 1)
class UBTS_Biped_TopLevel_C : public UBTService_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xf8
    FTimerHandle SprintTimerHandle; // 0x100
    bool TimeDilated; // 0x108
    char pad_109[0x7];
    UAblAbilityContext* AdditiveAbilityContext; // 0x110
    bool AnimDebugOn; // 0x118
    char pad_119[0x3];
    int32_t ReactionIndex; // 0x11c
    UClass* DebugReactionAbility; // 0x120
    int32_t SpellSlot; // 0x128
    EBTCustomActionType::Type BTActionType; // 0x12c
    char pad_12d[0x3];
    FTimerHandle LockOnTimerHandle; // 0x130
    FTimerHandle FullBodyWandCastTimerHandle; // 0x138
    FTimerHandle SpellButtonTimerHandle; // 0x140
    bool UsingInventoryItem; // 0x148
    char pad_149[0x7];
    AActor* InteractSenseTarget; // 0x150
    AActor* InteractActor; // 0x158
    FVariantMapHandle FullBodyCastVariantHandle; // 0x160
    bool StealthMode; // 0x164
    bool FinisherInitiated; // 0x165
    char pad_166[0x2];
    float DodgeCoolDownTime; // 0x168
    char pad_16c[0x4];
    FTimerHandle ProximityTimerHandle; // 0x170
    bool FaceShiftButtonHeld; // 0x178
    bool AltModifierPressed; // 0x179
    bool CogTargetDebugDraw; // 0x17a
    bool CancelQueuedStupefy; // 0x17b
    char pad_17c[0x4];
    FString CurrentHealthItem; // 0x180
    float TimeDeadBeforeDialog; // 0x190
    bool SoftLanding; // 0x194
    bool MedLanding; // 0x195
    bool FaceTarget; // 0x196
    bool IsMoving; // 0x197
    bool isSprinting; // 0x198
    ELandingType::Type LandingType; // 0x199
    char pad_19a[0x6];
    FTimerHandle ActivateActionsOnHUDTimerHandle; // 0x1a0
    bool HUDActionsShown; // 0x1a8
    bool MoveStickPressed; // 0x1a9
    bool ShouldSprintOnStartMoving; // 0x1aa
    char pad_1ab[0x5];
    FTimerHandle ShouldSprintOnStartMovingTimerHandle; // 0x1b0
    float DelayBeforeActionHud; // 0x1b8
    int32_t LoadOutSlot; // 0x1bc
    bool RagdollCriteriaMet; // 0x1c0
    char pad_1c1[0x7];
    FTimerHandle CastFailedTimerHandle; // 0x1c8
    EBTCustomActionType::Type ActionType; // 0x1d0
    char pad_1d1[0x3];
    float InjuryHeight; // 0x1d4
    float DeathHeight; // 0x1d8
    float LastTwitchSpellCastAtTime; // 0x1dc
    FString TakedownTutorialString; // 0x1e0
    int32_t SpellTestIndex; // 0x1f0
    int32_t SpellTestSlot; // 0x1f4
    AActor* SpellTestSpawnedActor; // 0x1f8
    TArray<FString> ItemNameArray; // 0x200
    TArray<FString> SpellNameArray; // 0x210
    FTimerHandle ItemMenuTimerHandle; // 0x220
    FTimerHandle DodgeTimerHandle; // 0x228
    FTimerHandle SprintStopTimerHandle; // 0x230
    FTimerHandle WalkStopTimerHandle; // 0x238
    UUI_BP_GadgetWheel_C* ItemWheelWidget; // 0x240
    float FallHeightAdjust; // 0x248
    bool IsWalking; // 0x24c
    char pad_24d[0x3];
    int32_t SpellWheelActiveSpellIndex; // 0x250
    char pad_254[0x4];
    FTimerHandle WalkStopTimerHandle_Idle; // 0x258
    FTimerHandle FieldGuideTimerHandle; // 0x260
    FTimerHandle OppugnoTimerHandle; // 0x268
    bool ItemMenuButtonHeld; // 0x270
    bool OppugnoButtonHeld; // 0x271
    bool InteractButtonPressed; // 0x272
    bool Stealing; // 0x273
    bool InteractStarted; // 0x274
    bool InteractDebug; // 0x275
    bool StupefyButtonHeld; // 0x276
    bool LockOnButtonHeld; // 0x277
    bool SprintButtonHeld; // 0x278
    char pad_279[0x7];
    ABP_StealthTakedownInteractActor_C* StealthInteractActor; // 0x280
    bool OppugnoSenseEnabled; // 0x288
    bool AimModeActive; // 0x289
    bool AimModeWasStartedInCombat; // 0x28a
    char pad_28b[0x1];
    float LoadoutNextTimeout; // 0x28c
    TArray<FName> ItemPickupLocks; // 0x290
    float BroomcastTime; // 0x2a0
    float BroomcastCooldownDuration; // 0x2a4
    static UBTS_Biped_TopLevel_C* StaticClass();
    void SelectedLockedDiamond(int32_t Current, int32_t NEW, bool CallFunc_NotEqual_IntInt_ReturnValue);
    void IsItemWheelAvailable(bool& IsAvailable, bool FoundItem, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void SetNextLightWandCast(bool Casual, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, AWandTool* CallFunc_GetWand_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void FlushQueuedActions(AActor* Owner);
    void EndAimMode(APlayerController* CallFunc_GetPlayerController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess);
    void StartAimMode(APlayerController* CallFunc_GetPlayerController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess);
    void SetOppugnoSenseEnabled(bool Enabled, AActor* CallFunc_GetActorOwner_ReturnValue, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_BoolBool_ReturnValue, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess_1);
    bool InHogwarts(FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsPlayerInWorld_ReturnValue);
    void StealthInteractTargetSighted(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, FString CallFunc_GetDisplayName_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2, FString CallFunc_DbReadMiscSaveDataItem_outValue, bool CallFunc_DbReadMiscSaveDataItem_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_CastToBoolean_ReturnValue, bool CallFunc_DbWriteMiscSaveDataItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void InteractDebugString(FString inString);
    bool IsSimpleInteractObject(AActor* Actor, ASimpleInteractObject* K2Node_DynamicCast_AsSimple_Interact_Object, bool K2Node_DynamicCast_bSuccess);
    bool IsTwoHandChest(AActor* Actor, bool CallFunc_DoesImplementInterface_ReturnValue);
    bool IsLootPickup(AActor* Actor, bool CallFunc_IsTwoHandChest_ReturnValue, UCombativePlantComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, AInventoryObject* K2Node_DynamicCast_AsInventory_Object, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsAlive_ReturnValue, ULootDropComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, AForagable* K2Node_DynamicCast_AsForagable, bool K2Node_DynamicCast_bSuccess_2, AHerb* K2Node_DynamicCast_AsHerb, bool K2Node_DynamicCast_bSuccess_3);
    void SetInteractTargetAllowed(bool Allowed, AActor* CallFunc_GetActorOwner_ReturnValue, FString CallFunc_Conv_BoolToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void CollectItem(FName ItemId, int32_t ItemCount, AActor* Actor, int32_t CallFunc_CanAddItem_ReturnValue);
    void ClearTrackedStudentBeacon(AActor* Actor, FName CallFunc_GetDbId_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsStudentLocatorBeaconActive_ReturnValue);
    void HandleAnalyticsAndKnowledge(AActor* Actor, UKnowledgeManager* CallFunc_Get_ReturnValue, FName CallFunc_GetDbId_ReturnValue);
    void PlayLootPickup(AActor* CallFunc_GetActorOwner_ReturnValue, bool CallFunc_EvaluateFilterOnActor_ReturnValue);
    void Pickup(UObject* PickupObject, FVector PickupTargetLocation, AActor* PickupActor, AActor* CallFunc_GetActorOwner_ReturnValue, FString CallFunc_GetObjectName_ReturnValue, AHerb* K2Node_DynamicCast_AsHerb, bool K2Node_DynamicCast_bSuccess, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, UCombativePlantComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, AWorldObject* K2Node_DynamicCast_AsWorld_Object, bool K2Node_DynamicCast_bSuccess_1, AInventoryObject* K2Node_DynamicCast_AsInventory_Object, bool K2Node_DynamicCast_bSuccess_2, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, FName CallFunc_GetDbId_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_GetIsInspectableBP_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, UActorComponent* K2Node_DynamicCast_AsActor_Component, bool K2Node_DynamicCast_bSuccess_4, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue, AForagable* K2Node_DynamicCast_AsForagable, bool K2Node_DynamicCast_bSuccess_5, AHerb* K2Node_DynamicCast_AsHerb_1, bool K2Node_DynamicCast_bSuccess_6, FVector CallFunc_Add_VectorVector_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void LootContainer(AActor* LootTargetActor, AActor* LootActor, UCognitionStimuliSourceComponent* CallFunc_GetComponentByClass_ReturnValue, AAmbulatory_Character* K2Node_DynamicCast_AsAmbulatory_Character, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetActorOwner_ReturnValue, int32_t CallFunc_Get_Inventory_Count_ReturnCount, bool CallFunc_LessEqual_IntInt_ReturnValue, AAmbulatory_Character* K2Node_DynamicCast_AsAmbulatory_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsTakingObjectStealing_ReturnValue);
    void Looting(AActor* Actor, FName CallFunc_GetStatName_ReturnValue, ULootDropComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void InteractCanceled(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue_1, UObject* CallFunc_GetValueAsObject_ReturnValue, ABase_Character* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess);
    void Interact(AForagable* K2Node_DynamicCast_AsForagable, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_GetItemCount_ReturnValue, FName CallFunc_GetItemID_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_3, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void InteractInitiated(float LocalInventoryCost, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, int32_t Temp_int_Array_Index_Variable, ABase_Character* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
    void CheckInteractTargetAllowed(AActor* Actor, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, bool CallFunc_EvaluateFilterOnActor_ReturnValue, bool CallFunc_EvaluateFilterOnActor_ReturnValue_1, AActor* CallFunc_GetActorOwner_ReturnValue_2, bool CallFunc_EvaluateFilterOnActor_ReturnValue_2, bool CallFunc_IsSimpleInteractObject_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_3, bool CallFunc_EvaluateFilterOnActor_ReturnValue_3, bool CallFunc_IsTwoHandChest_ReturnValue, bool CallFunc_IsLootPickup_ReturnValue);
    void OnInteractTargetLost(AActor* OldTarget);
    void OnInteractTargetChanged(AActor* NewTarget, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, APlayerController* CallFunc_GetPlayerController_ReturnValue);
    void OnInteractTargetSighted(AActor* Target, bool CallFunc_IsValid_ReturnValue);
    void CreateItemWheel(UUIManager* CallFunc_Get_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_GadgetWheel_C* CallFunc_Create_ReturnValue);
    void CleanupItemWheel(UUIManager* CallFunc_Get_ReturnValue);
    void Handle_Owl_Mail_Button(UUIManager* CallFunc_Get_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue, UUI_BP_PhoenixHUDWidget_C* K2Node_DynamicCast_AsUI_BP_Phoenix_HUDWidget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasUnreadMailNotification_bUnreadMail);
    void GetSwimAbility(EMovementMode PrevMovementMode, UClass*& Ability, bool K2Node_SwitchEnum_CmpSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
    void AdjustSpellWheelIndex(int32_t Direction, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Percent_IntInt_ReturnValue);
    void PutOppugnoTargetInBlackboard(FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetBestOppugnoActor_ReturnValue);
    void Stick_Click(bool OnlyOn, bool OnlyOff, AActor* CallFunc_GetActorOwner_ReturnValue, APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess_1);
    void UpdateCameraLookAtHeadTrackingTarget(ACameraStackLookAtTargetActor* CallFunc_GetLookAtTargetActorWithStrength_ReturnValue, ACameraStackLookAtTargetActor* CallFunc_GetLookAtTargetActorWithStrength_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue);
    void Dodge(bool FakeDodge, AActor* CallFunc_GetActorOwner_ReturnValue, UCreature_RiderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, UGameLogicObject* CallFunc_GetGameLogicObject_ReturnValue);
    void CheckForSpellDupes(bool& Allowed, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
    void Teleported(AAmbulatory_Character* InCharacter, FVector InAmountDisplaced, FRotator InAmoundRotated, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue);
    void FireSimpleSpell(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVariantMapHandle CallFunc_CreateVariantMap_ReturnValue, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue);
    void DoFallDamage(float LandingDamage, float FallHeight, float CallFunc_Subtract_FloatFloat_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, FDamageInfo CallFunc_DoDamageTarget_OutDamageInfo, bool CallFunc_DoDamageTarget_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1, bool CallFunc_GetContextOnActor_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_2, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_3, bool CallFunc_KillTarget_ReturnValue, bool CallFunc_HasAbilityTagBP_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue);
    void HandleLedgeDetected_NoJump(AActor* OwningActor);
    void HandleLedgeDetected(AActor* OwningActor, UTutorialSystem* CallFunc_Get_ReturnValue);
    void GetReactorTags(FGameplayTagContainer MunitionTags, FGameplayTagContainer& ReactorTags, FGameplayTagContainer ReactorTagsTemp, AActor* CallFunc_GetActorOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1);
    void GotoTargetFactSheet(FString CompendiumCategory, FName TargetId, AActor* Target, FString DestCompendiumPage, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString Temp_string_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_GetSubjectCategoryFromSubject_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, bool Temp_bool_Variable, bool Temp_bool_Variable_1, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_3, UKnowledgeManager* CallFunc_Get_ReturnValue, FString K2Node_Select_Default, EKnowledgeLevel CallFunc_GetPlayerKnowledgeLevel_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, UKnowledgeManager* CallFunc_Get_ReturnValue_1, FName CallFunc_IsKnowledgeSubject_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UCognitionComponent* CallFunc_GetComponentByClass_ReturnValue, FName CallFunc_GetDbId_ReturnValue, AActor* CallFunc_GetBestTarget_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, FString Temp_string_Variable_1, UCognitionComponent* CallFunc_GetComponentByClass_ReturnValue_1, AActor* CallFunc_GetBestTarget_ReturnValue_1, FString K2Node_Select_Default_1, UUIManager* CallFunc_Get_ReturnValue_2);
    void CastFinisher(int32_t FinisherIndex, AActor* CallFunc_GetActorOwner_ReturnValue, AWandTool* Temp_object_Variable, FVariantMapHandle CallFunc_CreateVariantMap_ReturnValue, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1);
    void StopSprint(UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue);
    void StartSprint(ESpeedModifierType::Type SpeedModType, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, bool CallFunc_IsActorDisillusioned_ReturnValue);
    void GetButtonQueueTimer(FName KeyName, float& Value, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, float CallFunc_GetValueAsFloat_ReturnValue);
    void SetButtonQueueTimer(FName NewParam, float Value, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue);
    void SetButtonKeyValue(FName KeyName, bool Value, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue);
    void GetButtonKeyValue(FName& KeyName, bool& Pressed, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue);
    void CompleteTwitchSpell(int32_t SpellIndex, int32_t CallFunc_Add_IntInt_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue, FVariantMapHandle CallFunc_CreateVariantMap_ReturnValue, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue_1);
    void DeselectTwitchSpell(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ATool* CallFunc_GetActiveTool_ReturnValue, AInventoryItemTool* K2Node_DynamicCast_AsInventory_Item_Tool, bool K2Node_DynamicCast_bSuccess);
    void CastTwitchSpell(int32_t SpellIndex, FString CompendiumPage, bool CallFunc_CheckForSpellDupes_Allowed, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_QuickActionInteract_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_2, int32_t CallFunc_GetActiveGroupIndex_ReturnValue, FVariantMapHandle CallFunc_CreateVariantMap_ReturnValue, EUIQActionBarType CallFunc_GetItemType_ReturnValue, FVariantMapHandle CallFunc_BroadcastAction_Actor_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void HealthChanged(AActor* Actor, float HealthChange, bool IndicateHUD, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetHealth_ReturnValue);
    void AdditiveReaction(AActor* ReactingActor, UClass* InAblAbilitClass, AActor* InInstigator, FVector ImpactDirection, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
    void StoreImpactValuesOnBlackboard(UClass* AbilityClass, AActor* ImpactInstigator, FVector TraceDirection, FVector ImpactPoint, FVector ImpactNormal, AActor* HitActor, FName HitBoneName, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2, FName CallFunc_MakeLiteralName_ReturnValue_3, FName CallFunc_MakeLiteralName_ReturnValue_4, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_5);
    void CustActionEvt_LandFromJump_K2Node_BTCustomActionEvent_58(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_LandFromFalling_K2Node_BTCustomActionEvent_57(FVariantMapHandle VariantMapHandle);
    void InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_109(FVariantMapHandle VariantMapHandle);
    void InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_108(FVariantMapHandle VariantMapHandle);
    void InpActEvt_AimModeButton_K2Node_CustomInputActionEvent_107(FVariantMapHandle VariantMapHandle);
    void GameLogicElementEvt_LockOnMode_K2Node_GameLogicBoolResultEvent_13(bool CachedResult);
    void CustActionEvt_CancelQueuedStupefy_K2Node_BTCustomActionEvent_56(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_StartAnimalGuide_K2Node_BTCustomActionEvent_55(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_CastFailedInCoolDown_K2Node_BTCustomActionEvent_54(FVariantMapHandle VariantMapHandle);
    void InpActEvt_HealthButton_K2Node_CustomInputActionEvent_106(FVariantMapHandle VariantMapHandle);
    void InpActEvt_CriticalFinisherButton_K2Node_CustomInputActionEvent_105(FVariantMapHandle VariantMapHandle);
    void InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_104(FVariantMapHandle VariantMapHandle);
    void InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_103(FVariantMapHandle VariantMapHandle);
    void InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_102(FVariantMapHandle VariantMapHandle);
    void InpActEvt_StupefyButton_Quick_K2Node_CustomInputActionEvent_101(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_100(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_99(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SpellButton_Top_K2Node_CustomInputActionEvent_98(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_97(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_96(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SpellButton_Right_K2Node_CustomInputActionEvent_95(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_94(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_93(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SpellButton_Bottom_K2Node_CustomInputActionEvent_92(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_91(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_90(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SpellButton_Left_K2Node_CustomInputActionEvent_89(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_88(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_87(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SpellModifierButton_K2Node_CustomInputActionEvent_86(FVariantMapHandle VariantMapHandle);
    void InpActEvt_RevelioButton_K2Node_CustomInputActionEvent_85(FVariantMapHandle VariantMapHandle);
    void InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_84(FVariantMapHandle VariantMapHandle);
    void InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_83(FVariantMapHandle VariantMapHandle);
    void InpActEvt_NavigationButton_K2Node_CustomInputActionEvent_82(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SwapLoadoutButton_Bottom_K2Node_CustomInputActionEvent_81(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SwapLoadoutButton_Right_K2Node_CustomInputActionEvent_80(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SwapLoadoutButton_Top_K2Node_CustomInputActionEvent_79(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SwapLoadoutButton_Left_K2Node_CustomInputActionEvent_78(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_CastFailAnimStarted_K2Node_BTCustomActionEvent_53(FVariantMapHandle VariantMapHandle);
    void InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_77(FVariantMapHandle VariantMapHandle);
    void InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_76(FVariantMapHandle VariantMapHandle);
    void InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_75(FVariantMapHandle VariantMapHandle);
    void InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_74(FVariantMapHandle VariantMapHandle);
    void InpActEvt_StupefyExpelliarmusButton_K2Node_CustomInputActionEvent_73(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SpellTest_K2Node_BTCustomActionEvent_52(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ItemTest_K2Node_BTCustomActionEvent_51(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_72(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_71(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_70(FVariantMapHandle VariantMapHandle);
    void InpActEvt_RevelioButtonBroom_K2Node_CustomInputActionEvent_69(FVariantMapHandle VariantMapHandle);
    void GameLogicElementEvt_OppugnoAllowed_K2Node_GameLogicBoolResultEvent_12(bool CachedResult);
    void InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_68(FVariantMapHandle VariantMapHandle);
    void InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_67(FVariantMapHandle VariantMapHandle);
    void InpActEvt_MouseWheelCastSpell_K2Node_CustomInputActionEvent_66(FVariantMapHandle VariantMapHandle);
    void InpActEvt_MouseWheelNextSpell_K2Node_CustomInputActionEvent_65(FVariantMapHandle VariantMapHandle);
    void InpActEvt_MouseWheelPrevSpell_K2Node_CustomInputActionEvent_64(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ToggleWalkJogButton_Keyboard_K2Node_CustomInputActionEvent_63(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ToggleWalkJogButton_Keyboard_K2Node_CustomInputActionEvent_62(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ActionSelectionMenuButton_K2Node_CustomInputActionEvent_61(FVariantMapHandle VariantMapHandle);
    void InpActEvt_CriticalFinisherButton_K2Node_CustomInputActionEvent_60(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_59(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_58(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ItemMenuButton_K2Node_CustomInputActionEvent_57(FVariantMapHandle VariantMapHandle);
    void InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_56(FVariantMapHandle VariantMapHandle);
    void InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_55(FVariantMapHandle VariantMapHandle);
    void InpActEvt_OppugnoButton_K2Node_CustomInputActionEvent_54(FVariantMapHandle VariantMapHandle);
    void InpActEvt_CriticalFinisherButtonKeyboard_K2Node_CustomInputActionEvent_53(FVariantMapHandle VariantMapHandle);
    void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_52(FVariantMapHandle VariantMapHandle);
    void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_51(FVariantMapHandle VariantMapHandle);
    void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_50(FVariantMapHandle VariantMapHandle);
    void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_49(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_50(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_49(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_MountedInteract_K2Node_BTCustomActionEvent_48(FVariantMapHandle VariantMapHandle);
    void GameLogicElementEvt_UsingKeyboardInput_K2Node_GameLogicBoolResultEvent_11(bool CachedResult);
    void InpActEvt_AM_LoadoutNext_K2Node_CustomInputActionEvent_48(FVariantMapHandle VariantMapHandle);
    void InpActEvt_AM_LoadoutPrevious_K2Node_CustomInputActionEvent_47(FVariantMapHandle VariantMapHandle);
    void InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_46(FVariantMapHandle VariantMapHandle);
    void InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_45(FVariantMapHandle VariantMapHandle);
    void InpActEvt_StupefyButton_K2Node_CustomInputActionEvent_44(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SlowMo_K2Node_CustomInputActionEvent_43(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SuperSlowMo_K2Node_CustomInputActionEvent_42(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireFinisherSpell_K2Node_BTCustomActionEvent_47(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_PlayerDied_K2Node_BTCustomActionEvent_46(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FocusOnHipsOn_K2Node_BTCustomActionEvent_45(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FocusOnHipsOff_K2Node_BTCustomActionEvent_44(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ToggleAbleHUD_K2Node_CustomInputActionEvent_41(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UpdateAbleDebugTarget_K2Node_CustomInputActionEvent_40(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_43(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_42(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_41(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_40(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireFullBodySpell_K2Node_BTCustomActionEvent_39(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FlourishWand_K2Node_BTCustomActionEvent_38(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FlourishWand_K2Node_BTCustomActionEvent_37(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Teleport_K2Node_BTCustomActionEvent_36(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_TriggerStumble_K2Node_BTCustomActionEvent_35(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_TriggerKnockDown_K2Node_BTCustomActionEvent_34(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_TriggerHitch_K2Node_BTCustomActionEvent_33(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_32(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Conjuring_K2Node_BTCustomActionEvent_31(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Conjuring_K2Node_BTCustomActionEvent_30(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_FireAOESpell_K2Node_BTCustomActionEvent_29(FVariantMapHandle VariantMapHandle);
    void InpActEvt_DEBUG_CycleCognitionDebug_K2Node_CustomInputActionEvent_39(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_28(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_UseInventoryItem_K2Node_BTCustomActionEvent_27(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AnimagusForm_K2Node_BTCustomActionEvent_26(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_BeastCapture_K2Node_BTCustomActionEvent_25(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_UsePotionStation_K2Node_BTCustomActionEvent_24(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_4(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_3(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(FVariantMapHandle VariantMapHandle);
    void OnLoaded_78E5F47E4DA3EB293495B4AB0017E703(UClass* Loaded);
    void CustActionEvt_MunitionProximity_K2Node_BTCustomActionEvent_23(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_CastFailed_K2Node_BTCustomActionEvent_22(FVariantMapHandle VariantMapHandle);
    void InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_38(FVariantMapHandle VariantMapHandle);
    void InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_37(FVariantMapHandle VariantMapHandle);
    void InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_36(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_PlayerDiesIfNoCompanion_K2Node_BTCustomActionEvent_21(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_20(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_TriggerRagdoll_K2Node_BTCustomActionEvent_19(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AdditiveLean_K2Node_BTCustomActionEvent_18(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AdditiveLean_K2Node_BTCustomActionEvent_17(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_RespawnFromDeath_K2Node_BTCustomActionEvent_16(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SetInvulnerable_K2Node_BTCustomActionEvent_15(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ClearInvulnerable_K2Node_BTCustomActionEvent_14(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_EquipWand_K2Node_BTCustomActionEvent_13(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ProtegoReady_K2Node_BTCustomActionEvent_12(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_35(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_34(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_33(FVariantMapHandle VariantMapHandle);
    void InpActEvt_JumpButton_K2Node_CustomInputActionEvent_32(FVariantMapHandle VariantMapHandle);
    void InpActEvt_JumpButton_K2Node_CustomInputActionEvent_31(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_EnterTotem_K2Node_BTCustomActionEvent_11(FVariantMapHandle VariantMapHandle);
    void GameLogicElementEvt_CollapseIntoRagdoll_Criteria_K2Node_GameLogicBoolResultEvent_10(bool CachedResult);
    void CustActionEvt_WorldShift_K2Node_BTCustomActionEvent_10(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_StartPuzzleMiniGame_K2Node_BTCustomActionEvent_9(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Landed_K2Node_BTCustomActionEvent_8(FVariantMapHandle VariantMapHandle);
    void InpActEvt_ProtegoButton_K2Node_CustomInputActionEvent_30(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_TriggerStartled_K2Node_BTCustomActionEvent_7(FVariantMapHandle VariantMapHandle);
    void InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_29(FVariantMapHandle VariantMapHandle);
    void InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_28(FVariantMapHandle VariantMapHandle);
    void InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_27(FVariantMapHandle VariantMapHandle);
    void InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_26(FVariantMapHandle VariantMapHandle);
    void InpActEvt_DodgeAndBlinkButton_K2Node_CustomInputActionEvent_25(FVariantMapHandle VariantMapHandle);
    void GameLogicElementEvt_strongCameraLookAtActive_K2Node_GameLogicBoolResultEvent_9(bool CachedResult);
    void InpActEvt_CreatureManagementButton_K2Node_CustomInputActionEvent_24(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_UseIdentificationStation_K2Node_BTCustomActionEvent_6(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGMapScreenToggle_K2Node_CustomInputActionEvent_23(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGCompendiumScreenToggle_K2Node_CustomInputActionEvent_22(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGQuestScreenToggle_K2Node_CustomInputActionEvent_21(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGChallengeScreenToggle_K2Node_CustomInputActionEvent_20(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGCharacterScreenToggle_K2Node_CustomInputActionEvent_19(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGInventoryScreenToggle_K2Node_CustomInputActionEvent_18(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGTalentsScreenToggle_K2Node_CustomInputActionEvent_17(FVariantMapHandle VariantMapHandle);
    void InpActEvt_LockOn_K2Node_CustomInputActionEvent_16(FVariantMapHandle VariantMapHandle);
    void InpActEvt_LockOn_K2Node_CustomInputActionEvent_15(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SprintButton_K2Node_CustomInputActionEvent_14(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SprintButton_K2Node_CustomInputActionEvent_13(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void GameLogicElementEvt_AimModeTimeDilation_K2Node_GameLogicBoolResultEvent_8(bool CachedResult);
    void InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_12(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_11(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGPauseMenu_K2Node_CustomInputActionEvent_10(FVariantMapHandle VariantMapHandle);
    void InpActEvt_StealthTakedownButton_K2Node_CustomInputActionEvent_9(FVariantMapHandle VariantMapHandle);
    void InpActEvt_StealthTakedownButton_K2Node_CustomInputActionEvent_8(FVariantMapHandle VariantMapHandle);
    void GameLogicElementEvt_LootPickup_K2Node_GameLogicBoolResultEvent_7(bool CachedResult);
    void GameLogicElementEvt_InteractDefault_K2Node_GameLogicBoolResultEvent_6(bool CachedResult);
    void CustActionEvt_GoToPuzzleMiniGame_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_GoToStealNode_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_MountMineCart_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_DeathlyHallowsAction_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void GameLogicElementEvt_InteractOpenChest_K2Node_GameLogicBoolResultEvent_5(bool CachedResult);
    void GameLogicElementEvt_SimpleInteractObject_K2Node_GameLogicBoolResultEvent_4(bool CachedResult);
    void GameLogicElementEvt_StealthAttack_K2Node_GameLogicBoolResultEvent_3(bool CachedResult);
    void InpActEvt_UMGOwlMailScreenToggle_K2Node_CustomInputActionEvent_7(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_CancelCurrentSpell_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_UMGSettingsScreenToggle_K2Node_CustomInputActionEvent_6(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SprintButton_K2Node_CustomInputActionEvent_5(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SprintButton_K2Node_CustomInputActionEvent_4(FVariantMapHandle VariantMapHandle);
    void InpActEvt_SprintButton_K2Node_CustomInputActionEvent_3(FVariantMapHandle VariantMapHandle);
    void InpActEvt_LockOn_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_LockOn_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_LockOn_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void GameLogicElementEvt_NoInteractDueToCombat_K2Node_GameLogicBoolResultEvent_2(bool CachedResult);
    void GameLogicElementEvt_hasInteractTarget_K2Node_GameLogicBoolResultEvent_1(bool CachedResult);
    void GameLogicElementEvt_CasualCast_K2Node_GameLogicBoolResultEvent_0(bool CachedResult);
    void CustActionEvt_ReactionRagdollLanded_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void StupefyTimerExpired();
    void CastFailedTimerExpired();
    void StupefyExpelliarmusTimerExpired();
    void ItemMenuTimerExpired();
    void CloseWheel();
    void RevelioMountTriggered();
    void ActivateActionsOnHUD();
    void OppugnoTimerExpired();
    void ResetWalkToggle_Idle();
    void ServiceBegin(AActor* OwnerActor);
    void ServiceEnd(AActor* OwnerActor);
    void EnterFloo(UObject* Caller);
    void GoToBed(UObject* Caller);
    void SpreadFeed(UObject* Caller);
    void AdditiveReactionComplete(UObject* Caller);
    void PutDownCarry(UObject* Caller);
    void CatchCarry(UObject* Caller);
    void DoPickup(UObject* Caller);
    void StationAbilityComplete(UObject* Caller);
    void OpenChest(UObject* Caller);
    void MunitionImpactDamage(UObject* Caller, FMunitionImpactData& MunitionImpactData);
    void ForcedTalk(UObject* Caller, FForcedConversation& FForcedConversation);
    void TSighted(UAISense* Sense, AActor* Target);
    void DropCarry(UObject* Caller);
    void EnterStealthMode(UObject* Caller);
    void ExitStealthMode(UObject* Caller);
    void NearMissTimerExpired();
    void SurfaceTypeChanged(UObject* Caller, FSurfaceTypeChanged& SurfaceTypeChanged);
    void NewHealthItemSelected(UObject* Caller, FString String);
    void FastTravelViaMapFinished(UObject* Caller);
    void PlayerCharacterDied(UObject* Caller);
    void PlayerTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated);
    void PlayerInputSoonToBeRemoved0();
    void DodgeTimerExpired();
    void FastTravelViaCrimeSceneFinished(UObject* Caller);
    void OnMovementModeChanged(ACharacter* Character, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode);
    void RevelioMount(UObject* Caller);
    void SprintStopTimerExpired();
    void CreatureMountComplete(UObject* Caller);
    void ResetKeyboardSprintWalkToggle(UObject* Caller);
    void FieldGuideTimerHandleExpired();
    void InteractTargetSighted(UObject* Caller);
    void InteractTargetChanged(UObject* Caller);
    void InteractTargetLost(UObject* Caller);
    void ResetShouldSprintOnStartMoving();
    void WalkStopTimerExpired();
    void DoPickupAnimation(UObject* Caller);
    void SprintTimerExpired();
    void LockOnTimerExpired();
    void FastTravelViaMissionFinished(UObject* Caller);
    void ExecuteUbergraph_BTS_Biped_TopLevel(int32_t EntryPoint);
}; // Size: 0x2a8
#pragma pack(pop)
