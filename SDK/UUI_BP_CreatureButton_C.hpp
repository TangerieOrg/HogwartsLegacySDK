#pragma once
#include <cstdint>
#include "ECreaturePregnancyState.hpp"
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "FTimespan.hpp"
#include "UIconButtonWidget.hpp"
class UUI_BP_CreatureStatusSummary_C;
class UCanvasPanel;
class UWidgetAnimation;
class UWidgetSwitcher;
class USizeBox;
class UImage;
class UCreatureState;
class UPhoenixTextBlock;
class UCreatureDefinition;
class UUMGSequencePlayer;
class UTexture2D;
class UObject;
#pragma pack(push, 1)
class UUI_BP_CreatureButton_C : public UIconButtonWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4a8
    UWidgetAnimation* OnHoverAnimation; // 0x4b0
    UWidgetAnimation* OnSelectedAnimation; // 0x4b8
    UImage* CreatureAlbinoIcon; // 0x4c0
    UImage* CreatureGenderIcon; // 0x4c8
    UImage* CreatureImage; // 0x4d0
    UPhoenixTextBlock* CreatureNameText; // 0x4d8
    USizeBox* creatureSizeBox; // 0x4e0
    UImage* emptyImage; // 0x4e8
    UImage* newHighlight; // 0x4f0
    UPhoenixTextBlock* ReadyInLabel; // 0x4f8
    USizeBox* StatusSizeBox; // 0x500
    UPhoenixTextBlock* statusText; // 0x508
    UCanvasPanel* StatusTime; // 0x510
    UWidgetSwitcher* StatusWidgetSwitcher; // 0x518
    UPhoenixTextBlock* timeText; // 0x520
    UUI_BP_CreatureStatusSummary_C* UI_BP_CreatureStatusSummary; // 0x528
    UCreatureState* CreatureState; // 0x530
    char pad_538[0x58];
    UCreatureDefinition* CreatureDefinition; // 0x590
    UCreatureDefinition* AdultCreatureDefinition; // 0x598
    UCreatureState* UnbornCreatureState; // 0x5a0
    bool isButtonHovered; // 0x5a8
    bool AlwaysClickable; // 0x5a9
    char pad_5aa[0x2];
    int32_t CreatureIndex; // 0x5ac
    bool IsEmpty; // 0x5b0
    bool IsMale; // 0x5b1
    bool IsAlbino; // 0x5b2
    char pad_5b3[0x5];
    static UUI_BP_CreatureButton_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_1);
    void UpdateBeastState(bool K2Node_SwitchInteger_CmpSuccess);
    void Set_Is_Empty(bool ShowEmptySlot);
    void ToggleBeastState(int32_t BeastTypeIndex);
    void PlaySelectedAnimation(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void InitPregnantCreature(UTexture2D* Temp_object_Variable, bool CallFunc_GetIsMale_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, UTexture2D* Temp_object_Variable_1, ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsAlbino_ReturnValue, bool Temp_bool_Variable, UTexture2D* K2Node_Select_Default, FString CallFunc_GetCreatureIconTextureName_IconTextureName, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    void SetEnabled(bool Enabled);
    void UpdateReservedSlot(ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void UpdatePregnantCreature(ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void UpdateEgg(FName CallFunc_GetTypeID_ReturnValue, FName CallFunc_GetTypeID_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue);
    void UpdateHatchingProgress(FTimespan CallFunc_GetHatchingTimeRemaining_ReturnValue);
    void UpdateRegularCreatureStatusLabel(bool Temp_bool_Variable, FString Temp_string_Variable, FString Temp_string_Variable_1, bool Temp_bool_Variable_1, FString Temp_string_Variable_2, bool CallFunc_GetIsByproductReady_ReturnValue, bool CallFunc_IsByproductOnCooldown_ReturnValue, FString K2Node_Select_Default, FString K2Node_Select_Default_1);
    void UpdateRegularCreature(FName CallFunc_GetTypeID_ReturnValue, FName CallFunc_GetTypeID_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue);
    void UpdateUnbornCreature(UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, UCreatureState* K2Node_DynamicCast_AsCreature_State, bool K2Node_DynamicCast_bSuccess, ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void UpdateGestationProgress(FTimespan TimeRemaining, UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsUnbornCreature_ReturnValue, UCreatureState* K2Node_DynamicCast_AsCreature_State, bool K2Node_DynamicCast_bSuccess, FTimespan CallFunc_Get_Creature_Pregnancy_Durations_TotalDuration, FTimespan CallFunc_Get_Creature_Pregnancy_Durations_DurationRemaining, FTimespan CallFunc_Get_Creature_Pregnancy_Durations_TotalDuration_1, FTimespan CallFunc_Get_Creature_Pregnancy_Durations_DurationRemaining_1);
    void IsHoverable(bool& Result, bool CallFunc_IsEgg_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsIncubating_ReturnValue, bool CallFunc_IsPregnant_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void InitEgg(FSlateColor K2Node_MakeStruct_SlateColor, FString CallFunc_GetCreatureIconTextureName_IconTextureName, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    void InitRegularCreature(FSlateColor K2Node_MakeStruct_SlateColor);
    void InitUnbornCreature(FString Temp_string_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, FString Temp_string_Variable_1, bool Temp_bool_Variable_2, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsEggLaying_ReturnValue, FString Temp_string_Variable_2, FSlateColor K2Node_Select_Default, FName CallFunc_GetAdultCreatureTypeID_ReturnValue, bool CallFunc_IsEggLaying_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, FString CallFunc_GetUnbornCreatureIconTextureName_IconTextureName, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_IsEggLaying_ReturnValue_2, FName CallFunc_GetEggTypeID_ReturnValue, FName CallFunc_GetOffspringCreatureTypeID_ReturnValue, FName K2Node_Select_Default_1, bool Temp_bool_Variable_3, FString CallFunc_Conv_NameToString_ReturnValue, FString K2Node_Select_Default_2, FString K2Node_Select_Default_3);
    void InitEmptySlot();
    void GetCreatureState(UCreatureState*& CreatureState);
    void SetCreatureState(UCreatureState* InCreatureState);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ForceUnhover();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void Destruct();
    void OnNeedsChanged();
    void OnByproductCooldownEnded();
    void ExecuteUbergraph_UI_BP_CreatureButton(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_IsDesignTime, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsValid_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
    void OnClicked__DelegateSignature(UUI_BP_CreatureButton_C* CreatureButton);
    void OnUnhovered__DelegateSignature(UUI_BP_CreatureButton_C* CreatureButton);
    void OnHovered__DelegateSignature(UUI_BP_CreatureButton_C* CreatureButton);
}; // Size: 0x5b8
#pragma pack(pop)
