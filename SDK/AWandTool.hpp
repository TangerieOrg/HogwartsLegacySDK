#pragma once
#include <cstdint>
#include "AItemTool.hpp"
#include "ERightArmState\Type.hpp"
#include "EWandCastType\Type.hpp"
#include "FBTCustomAction.hpp"
#include "FComboSplitData.hpp"
#include "FDialogueConversationReference.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
class UTriggerEffect;
class AFlyingBook;
class UButtonWatcherRecord;
class UToolSetComponent;
class UClass;
class ASpellTool;
class UNiagaraSystem;
class UAkAudioEvent;
class USpellToolRecord;
class AActor;
class ATool;
class UMeshComponent;
class UReticule;
class AProtegoSpellTool;
#pragma pack(push, 1)
class AWandTool : public AItemTool {
public:
    char pad_2f0[0x20];
    UButtonWatcherRecord* SpellButtonWatcher; // 0x310
    UClass* EquipExecutionClass; // 0x318
    UClass* UnequipExecutionClass; // 0x320
    UClass* HoldExecutionClass; // 0x328
    UClass* HandOnlyAbleExecutionClass; // 0x330
    UClass* SpecialAbleExecutionClass; // 0x338
    UClass* TargetSightedExecutionClass; // 0x340
    UClass* AlertedExecutionClass; // 0x348
    UClass* HeavyAnticipationExecutionClass; // 0x350
    UClass* StartLumosExecutionClass; // 0x358
    UClass* ChannelingExecutionClass; // 0x360
    UClass* WandCastFailExecutionClass; // 0x368
    UClass* WandCastFailMoveExecutionClass; // 0x370
    TArray<FGameplayTagContainer> ComboAnimationTags; // 0x378
    UClass* NextLightCastAbility; // 0x388
    UClass* NextHeavyCastAbility; // 0x390
    UClass* StartingCasualLightCastAbility; // 0x398
    UClass* StartingCombatLightCastAbility; // 0x3a0
    FName m_chargeEvent; // 0x3a8
    FName m_chargeTimeUpgrade; // 0x3b0
    float m_chargeTime; // 0x3b8
    FName m_fireEvent; // 0x3bc
    float m_fireRate; // 0x3c4
    UAkAudioEvent* m_failDueToCooldown; // 0x3c8
    FDialogueConversationReference m_failDueToCooldownDialogEvent; // 0x3d0
    UNiagaraSystem* m_failDueToCooldownVFX; // 0x3e0
    bool bFinishersActive; // 0x3e8
    char pad_3e9[0x3];
    FBTCustomAction ProtegoAction; // 0x3ec
    float MeleeRange; // 0x3f8
    float MeleeHalfAngle; // 0x3fc
    USpellToolRecord* SpellBlock; // 0x400
    USpellToolRecord* SpellBlockDH; // 0x408
    USpellToolRecord* SpellPewPew; // 0x410
    USpellToolRecord* SpellPewPewDH; // 0x418
    USpellToolRecord* StealthAttack; // 0x420
    int32_t AvailableSpellLoadoutIndex; // 0x428
    char pad_42c[0x4];
    USpellToolRecord* ProtegoRetaliateSpell; // 0x430
    char pad_438[0x50];
    UClass* RightTriggerDefaultEffect; // 0x488
    UClass* LeftTriggerDefaultEffect; // 0x490
    TArray<USpellToolRecord*> PreloadSpells; // 0x498
    TArray<USpellToolRecord*> DeathlyHallowPreloadSpells; // 0x4a8
    UTriggerEffect* pRightTriggerDefaultEffect; // 0x4b8
    UTriggerEffect* pLeftTriggerDefaultEffect; // 0x4c0
    UToolSetComponent* ToolSetComponent; // 0x4c8
    char pad_4d0[0xf0];
    static AWandTool* StaticClass();
    void WandCastFailedTimerExpired();
    void TurnOnTriggerEffects();
    void TurnOffTriggerEffects();
    void TargetSpellSelected(bool Immediate);
    bool StopLastSpell(ASpellTool* NewSpellTool, bool& OutAlreadyActivated);
    void StartHeavyComboSplitTimer(FComboSplitData ComboSplitData);
    void StartComboSplitTimer(FComboSplitData ComboSplitData);
    void SpellPreload();
    void SetWandStyle(FName WandStyle);
    void SetProjectileSpeedMultiplier(float Multiplier);
    void SetNextWandCastType(EWandCastType::Type WandCastState);
    void SetNextLightCastAbility(UClass* InAbility);
    void SetNextHeavyCastAbility(UClass* InAbility);
    void SetFinishersActive(bool bActive);
    void SetContextsOnBarSpell(int32_t Index, bool bFlag);
    void SetAttackingActor(AActor* i_attackingActor);
    void SetAimTransform(FVector Target);
    void ResetLightCombo();
    void ResetHeavyCombo();
    void ResetCombos();
    void ResetComboOnBranch();
    void RemoveCollectibleBook(AFlyingBook* book);
    void OnSpellLoaded(USpellToolRecord* SpellToolRecord);
    void OnSpellCasted();
    void OnSpellCast__DelegateSignature(ASpellTool* SpellTool);
    void OnSpell_Released(int32_t SpellSlot);
    void OnSpell_Pressed(int32_t SpellSlot);
    void OnRightArmStateChanged(ERightArmState::Type RightArmState, ERightArmState::Type LastRightArmState);
    void OnCharacterLoadComplete(AActor* Actor);
    void OnActiveSpellToolChanged(ATool* ActivatedSpell, ATool* DeactivatedSpell);
    static bool LoadSpellByName(AActor* InActor, FString Spell, bool Async, bool HighPriority);
    static bool LoadAllSlottedSpells(AActor* InActor);
    static bool LoadAllAccessibleSpells(AActor* InActor);
    bool IsSpellToolAvailable(USpellToolRecord* SpellToolRecord, bool bImmediate);
    UMeshComponent* GetWandMesh();
    int32_t GetTargetSpellIndex();
    ASpellTool* GetSpellTool(USpellToolRecord* SpellToolRecord);
    USpellToolRecord* GetSpellRecordFromSlot(int32_t Index);
    UReticule* GetReticleWidget();
    AProtegoSpellTool* GetProtegoSpellTool();
    float GetProjectileSpeedMultiplier();
    ASpellTool* GetFinisherSpellTool(int32_t SpellSlot);
    ASpellTool* GetActiveSpellTool();
    void EndSpellCast(ASpellTool*& InSpellTool);
    void ComputeParryAimTransform();
    bool CheckRequiredPerks(FGameplayTagContainer& PerkContainer);
    bool CastStealthTakedown();
    bool CastSpell(ASpellTool* InSpellTool, bool bImmediate);
    bool CastPewPewSpell();
    bool CastActiveSpell();
    void CancelHeavyComboSplitTimer();
    void CancelCurrentSpell();
    void CancelComboSplitTimer();
    bool BlockStart();
    void BlockEnd();
    static void BarItemSelected(AActor* InActor, int32_t Index, bool bFlag);
    bool AreFinishersActive();
    static bool AreAllSlottedSpellsLoaded(AActor* InActor);
    static bool AreAllAccessibleSpellsLoaded(AActor* InActor);
    void ApplyTriggerEffectDefault(bool RightTrigger, bool LeftTrigger);
    void AddCollectibleBook(AFlyingBook* book);
    ASpellTool* ActivateSpellTool(USpellToolRecord* SpellToolRecord, bool bImmediate);
    bool ActivateInstantSpellTool(int32_t Index);
}; // Size: 0x5c0
#pragma pack(pop)
