#pragma once
#include <cstdint>
#include "EUIHealthBarType.hpp"
#include "FGameplayTag.hpp"
#include "FGeometry.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "UHUDElementGroup.hpp"
class UUI_BP_CreatureStatusSummary_C;
class UWidgetAnimation;
class UCanvasPanel;
class UImage;
class UInvalidationBox;
class UPhoenixImage;
class UBorder;
class UProgressBar;
class UPhoenixTextBlock;
class UVerticalBox;
class AActor;
class UUMGSequencePlayer;
class ABiped_Player;
class UGameplayModComponent;
class UObjectStateInfo;
class UCreature_NurtureComponent;
class UCreatureState;
class UCreatureManager;
class UCreatureDefinition;
class UCanvasPanelSlot;
class UObject;
#pragma pack(push, 1)
class UUI_BP_NPCHealthMeter_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* FadeOut; // 0x2f0
    UWidgetAnimation* DeathFadeOut; // 0x2f8
    UWidgetAnimation* OffsetHealthbarReset; // 0x300
    UWidgetAnimation* OffsetHealthbar; // 0x308
    UWidgetAnimation* FadeIn; // 0x310
    UImage* Albino; // 0x318
    UPhoenixImage* Bg; // 0x320
    UImage* CreatureGender; // 0x328
    UUI_BP_CreatureStatusSummary_C* CreatureStatus; // 0x330
    UProgressBar* DamageBar; // 0x338
    UInvalidationBox* InvalidationBoxNPCHealthMeter; // 0x340
    UPhoenixTextBlock* Level; // 0x348
    UImage* LevelBox; // 0x350
    UPhoenixImage* Poof1; // 0x358
    UPhoenixImage* Poof2; // 0x360
    UPhoenixImage* Poof3; // 0x368
    UPhoenixImage* Poof4; // 0x370
    UPhoenixImage* Poof5; // 0x378
    UPhoenixImage* Poof6; // 0x380
    UPhoenixImage* Poof7; // 0x388
    UPhoenixImage* Poof8; // 0x390
    UPhoenixImage* Poof9; // 0x398
    UPhoenixImage* Spacer; // 0x3a0
    UImage* Swirls; // 0x3a8
    UImage* Swirls2; // 0x3b0
    UBorder* TargetCallout; // 0x3b8
    UVerticalBox* TargetCalloutVerticalBox; // 0x3c0
    UCanvasPanel* targetHealth; // 0x3c8
    UProgressBar* targetHealthBar; // 0x3d0
    UCanvasPanel* TargetLevel; // 0x3d8
    UPhoenixTextBlock* TargetName; // 0x3e0
    AActor* CurrentTargetActor; // 0x3e8
    bool PlayingDeathFadeOut; // 0x3f0
    char pad_3f1[0x3];
    float FadeOutDelay; // 0x3f4
    bool ShouldShowHealth; // 0x3f8
    bool ShouldShowName; // 0x3f9
    char pad_3fa[0x6];
    AActor* LastTargetActor; // 0x400
    bool DesiredFadeState; // 0x408
    bool CurrentFadeState; // 0x409
    bool FadeOutRequested; // 0x40a
    char pad_40b[0x5];
    static UUI_BP_NPCHealthMeter_C* StaticClass();
    void CheckForNewTarget(bool CallFunc_IsValid_ReturnValue);
    void PlayFadeAnimation(bool FadeIn, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void SetLevelTextColor(float Level, bool Temp_bool_Variable, FName Temp_name_Variable, FName Temp_name_Variable_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue, UGameplayModComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetModBlackboardValue_OutValue, bool CallFunc_GetModBlackboardValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FName K2Node_Select_Default, FLinearColor CallFunc_GetColorByTag_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor);
    void RemoveStealthDamageIndication(UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetHealthPercentage_ReturnValue);
    void UpdateStealthKillStatus(bool InStealthRange, float StealthDamage, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_SpellWillKillTarget_OutDamage, bool CallFunc_SpellWillKillTarget_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealthPercentage_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
    void SetHealthBarColor(EUIHealthBarType HealthBarType, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FName Temp_name_Variable, FName Temp_name_Variable_1, FName K2Node_Select_Default, FLinearColor CallFunc_GetColorByTag_ReturnValue);
    void SetCurrentTargetActor(AActor* TargetActor, bool ShowName, bool ShowHealth, bool CallFunc_IsValid_ReturnValue);
    void HealthChanged(AActor* Target, float Health, bool Not_sure, bool CallFunc_IsValid_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetUIHealthPercent_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue);
    void CreatureInfo(AActor* InCreature, UCreature_NurtureComponent* NurtureComponent, UCreatureState* CreatureState, bool CallFunc_IsValid_ReturnValue, UCreature_NurtureComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsCreatureCaptured_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue, UCreatureDefinition* CallFunc_BP_GetCreatureDefinitionForActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetCanBeCaptured_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
    void SetupWildCreature(UCreature_NurtureComponent* NurtureComponent, UCreatureState* CreatureState, bool CallFunc_GetIsAlbino_ReturnValue, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, FSlateBrush K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue);
    void SetupTamedCreature(UCreatureState* CreatureState, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, bool CallFunc_IsAlbino_ReturnValue, bool Temp_bool_Variable, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue_1, FSlateBrush K2Node_Select_Default);
    void UpdateTarget(AActor* Target, bool ShowName, bool ShowHealthBar, float CurAnimTime, bool L_ShowBadge, bool L_ShowName, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, bool Temp_bool_Variable, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetLevel_ReturnValue, FName CallFunc_GetDbId_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetDummyHealthBarColor(UObject* Caller);
    void RestoreEnemyHealthBarColor(UObject* Caller);
    void TargetAcquired(AActor* Target);
    void TargetLost();
    void CanStealthKill(UObject* Caller, int32_t int);
    void WidgetAnimationEvt_DeathFadeOut_K2Node_WidgetAnimationEvent_0();
    void SetColorBlindMode(UObject* Caller, int32_t int);
    void On_FadeOut_Complete();
    void ExecuteUbergraph_UI_BP_NPCHealthMeter(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UObject* K2Node_CustomEvent_Caller_3, UObject* K2Node_CustomEvent_Caller_2);
}; // Size: 0x410
#pragma pack(pop)
