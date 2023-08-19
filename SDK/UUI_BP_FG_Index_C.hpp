#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLegendItemData.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UIndex_FG.hpp"
class UWidgetAnimation;
class UUI_BP_FieldGuideButton_Gear_C;
class UUI_BP_FG_ActionsButton_C;
class UPhoenixTextBlock;
class UUI_BP_FieldGuideButton_Collections_C;
class UObject;
class UUI_BP_ParallaxWidget_C;
class UWidget;
class UImage;
class UUI_BP_FieldGuideButton_Inventory_C;
class UUI_BP_FieldGuideButton_Map_C;
class UUI_BP_FieldGuideButton_Owlpost_C;
class UBorder;
class UUI_BP_FieldGuideButton_Quests_C;
class UUI_BP_FieldGuideButton_Settings_C;
class UUI_BP_FieldGuideButton_Talents_C;
class UCanvasPanelSlot;
class UMenuCursorWidget;
class UExperienceManager;
class UMaterialInstanceDynamic;
class UIconButtonWidget;
class UUIManager;
class UTutorialSystem;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_FG_Index_C : public UIndex_FG {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3d8
    UWidgetAnimation* IntroAnimation; // 0x3e0
    UWidgetAnimation* AmbientBackgroundAnimation; // 0x3e8
    UWidgetAnimation* TutorialBounce_PlayerLevel; // 0x3f0
    UUI_BP_FG_ActionsButton_C* ActionsButton; // 0x3f8
    UPhoenixTextBlock* AvailableAssignments; // 0x400
    UUI_BP_FieldGuideButton_Collections_C* CollectionsButton; // 0x408
    UUI_BP_ParallaxWidget_C* crestParallax; // 0x410
    UUI_BP_FieldGuideButton_Gear_C* GearButton; // 0x418
    UImage* HouseCrest; // 0x420
    UUI_BP_FieldGuideButton_Inventory_C* InventoryButton; // 0x428
    UPhoenixTextBlock* LevelTitle; // 0x430
    UUI_BP_FieldGuideButton_Map_C* MapButton; // 0x438
    UUI_BP_FieldGuideButton_Owlpost_C* OwlMailButton; // 0x440
    UBorder* playerLevelBorder; // 0x448
    UImage* PlayerLevelHouseCrest; // 0x450
    UPhoenixTextBlock* playerLevelText; // 0x458
    UUI_BP_FieldGuideButton_Quests_C* QuestsButton; // 0x460
    UImage* rayBurst; // 0x468
    UUI_BP_ParallaxWidget_C* rayburstParallax; // 0x470
    UUI_BP_FieldGuideButton_Settings_C* SettingsButton; // 0x478
    UUI_BP_FieldGuideButton_Talents_C* TalentsButton; // 0x480
    UBorder* TUT_PlayerLevel; // 0x488
    UBorder* TutorialOverlay; // 0x490
    UImage* XPFill_Image; // 0x498
    char pad_4a0[0x90];
    FString BookHouseCrest; // 0x530
    FString ActionMeterHouse; // 0x540
    FString PlayerLevelFill; // 0x550
    FString PlayerLevelCrest; // 0x560
    FLinearColor HouseEffectColor; // 0x570
    char pad_580[0x28];
    TArray<UWidget*> TutorialHighlightWidgets; // 0x5a8
    FHermesBPDelegateHandle HighlightChallengesHandle; // 0x5b8
    static UUI_BP_FG_Index_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void BringWidgetBelowOverlay(UWidget* Widget, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, int32_t CallFunc_GetZOrder_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, int32_t CallFunc_GetZOrder_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1);
    void BringWidgetAboveOverlay(UWidget* Widget, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, int32_t CallFunc_GetZOrder_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, int32_t CallFunc_GetZOrder_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1);
    void HideTutorialOverlay(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, int32_t CallFunc_GetZOrder_ReturnValue, UWidget* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_GetZOrder_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1);
    void ShowTutorialOverlay(ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void UpdateNewItemStatus();
    void HideTooltip(UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue);
    void ShowYearTooltip(int32_t Year, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue);
    void SetPlayerXPLevel(UExperienceManager* CallFunc_Get_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32_t CallFunc_GetExperiencePoints_ReturnValue, int32_t CallFunc_GetExperienceLevelStartPoints_ReturnValue, int32_t CallFunc_GetExperienceLevelEndPoints_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, UExperienceManager* CallFunc_Get_ReturnValue_1, int32_t CallFunc_GetExperienceLevel_ReturnValue);
    void SetHouseAssets(bool CallFunc_AsyncFindIconTexture2D_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
    void SetActionCompletionPct(float Percent);
    void OnGetAvailableAssignments0(FString DisplayText);
    void Construct();
    void OnSetPlayerLevel0(int32_t NewLevel);
    void OnSetActionsPct0(float OldPct, float NewPct);
    void OnSetSchoolPct0(float OldPct, float NewPct);
    void GoToPage(TArray<FString>& DestinationStack);
    void SetSchoolProgressTutorialHighlight(bool ShowHighlight);
    void SetPlayerLevelTutorialHighlight(bool ShowHighlight);
    void TutorialSaysHighlightChallenges(UObject* Caller);
    void BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_1_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_2_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_4_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_5_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_6_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_7_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_16_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_17_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_GearButton_K2Node_ComponentBoundEvent_18_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_19_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_InventoryButton_K2Node_ComponentBoundEvent_20_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_21_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_TalentsButton_K2Node_ComponentBoundEvent_22_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_23_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_SettingsButton_K2Node_ComponentBoundEvent_24_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_25_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_MapButton_K2Node_ComponentBoundEvent_26_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_27_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_CollectionsButton_K2Node_ComponentBoundEvent_28_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_29_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_OwlMailButton_K2Node_ComponentBoundEvent_30_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_31_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_QuestsButton_K2Node_ComponentBoundEvent_32_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_33_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_34_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void BndEvt__UI_BP_FG_Index_ActionsButton_K2Node_ComponentBoundEvent_35_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton);
    void ShowIndexIntro();
    void ExecuteUbergraph_UI_BP_FG_Index(int32_t EntryPoint, FLegendItemData K2Node_MakeStruct_LegendItemData, bool Temp_bool_Variable, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1, FString K2Node_Event_DisplayText, bool Temp_bool_Variable_1, int32_t K2Node_Event_NewLevel, float K2Node_Event_OldPct_1, float K2Node_Event_NewPct_1, float K2Node_Event_OldPct, float K2Node_Event_NewPct, TArray<FString>& K2Node_Event_DestinationStack, FLegendItemData K2Node_MakeStruct_LegendItemData_1, bool K2Node_CustomEvent_ShowHighlight_1, TArray<FLegendItemData>& K2Node_MakeArray_Array, bool K2Node_CustomEvent_ShowHighlight, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue, UTutorialSystem* CallFunc_Get_ReturnValue_1, bool CallFunc_IsTutorialStepActiveOrAboutToBeByAlias_ReturnValue, UTutorialSystem* CallFunc_Get_ReturnValue_2, UTutorialSystem* CallFunc_Get_ReturnValue_3, bool CallFunc_IsTutorialStepActiveByAlias_ReturnValue, bool CallFunc_IsTutorialStepActiveOrAboutToBeByAlias_ReturnValue_1, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void ActionsScreenSelected__DelegateSignature();
    void QuestsScreenSelected__DelegateSignature();
    void OwlMailScreenSelected__DelegateSignature();
    void CollectionsScreenSelected__DelegateSignature();
    void MapScreenSelected__DelegateSignature();
    void SettingsScreenSelected__DelegateSignature();
    void TalentsScreenSelected__DelegateSignature();
    void InventoryScreenSelected__DelegateSignature();
    void GearScreenSelected__DelegateSignature();
}; // Size: 0x5c8
#pragma pack(pop)
