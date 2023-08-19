#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FGameplayTag.hpp"
#include "FHealthThreshold.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "UHUDElementGroup.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class USlider;
class UImage;
class UInvalidationBox;
class UCreatureState;
class UPhoenixTextBlock;
class UProgressBar;
class AActor;
class UCreatureManager;
class UObjectStateInfo;
class UWidget;
class UUMGSequencePlayer;
class UCharacterStateInfo;
class UUIManager;
class APawn;
class UGameplayModComponent;
#pragma pack(push, 1)
class UUI_BP_HUD_BossMeter_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* ShowBossHealthMeter; // 0x2f0
    UImage* CreatureGender; // 0x2f8
    UCanvasPanel* HealthThresholds; // 0x300
    UImage* Image_194; // 0x308
    UInvalidationBox* InvalidationBoxBossMeter; // 0x310
    UPhoenixTextBlock* Level; // 0x318
    UCanvasPanel* targetHealth; // 0x320
    UProgressBar* targetHealthBar; // 0x328
    UCanvasPanel* TargetLevel; // 0x330
    UPhoenixTextBlock* TargetName; // 0x338
    bool HasBossTarget; // 0x340
    char pad_341[0x7];
    AActor* TargetActor; // 0x348
    bool IsGendered; // 0x350
    char pad_351[0x7];
    static UUI_BP_HUD_BossMeter_C* StaticClass();
    void UpdateCreatureInfo(AActor* InCreature, UCreatureState* CreatureState, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, bool Temp_bool_Variable, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue_1, FSlateBrush K2Node_Select_Default, UCreatureManager* CallFunc_Get_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue);
    void HealthChanged(AActor* Target, float Health, bool Not_sure, bool CallFunc_IsValid_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetUIHealthPercent_ReturnValue);
    void SetCurrentTargetActor(AActor* TargetActor, bool ShowName, bool ShowHealth);
    void UpdateBossTarget(AActor* BossTarget, bool ShowBossName, bool ShowBossHealthBar, bool FoundThresholds, bool TempShowBadge, bool TempShowName, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32_t Temp_int_Array_Index_Variable, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, ESlateVisibility Temp_byte_Variable, UWidget* CallFunc_GetChildAt_ReturnValue, USlider* K2Node_DynamicCast_AsSlider, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, UCharacterStateInfo* K2Node_DynamicCast_AsCharacter_State_Info, bool K2Node_DynamicCast_bSuccess_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, TArray<FHealthThreshold>& CallFunc_GetHealthThresholdArray_ReturnValue, FHealthThreshold CallFunc_Array_Get_Item, float CallFunc_SelectFloat_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, FGameplayTag CallFunc_MakeLiteralGameplayTag_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, ESlateVisibility Temp_byte_Variable_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, UGameplayModComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetModBlackboardValue_OutValue, bool CallFunc_GetModBlackboardValue_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue_1, float CallFunc_GetLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void BossHealthChanged(AActor* BossTarget, bool CallFunc_IsValid_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetUIHealthPercent_ReturnValue);
    void TargetAcquired(AActor* Target);
    void TargetLost();
    void ExecuteUbergraph_UI_BP_HUD_BossMeter(int32_t EntryPoint, AActor* K2Node_CustomEvent_Target, bool CallFunc_IsValid_ReturnValue);
}; // Size: 0x358
#pragma pack(pop)
