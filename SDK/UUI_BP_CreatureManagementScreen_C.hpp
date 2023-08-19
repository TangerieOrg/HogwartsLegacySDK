#pragma once
#include <cstdint>
#include "ECreaturePregnancyState.hpp"
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FEventReply.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FInventoryResult.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UScreen.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UPhoenixTextBlock;
class UUI_BP_Legend_Horizontal_Screen_C;
class UBorder;
class UImage;
class UScaleBox;
class UOverlay;
class UUI_BP_CreatureManagement_DetailsPanel_C;
class UUI_BP_ItemScrollBox_C;
class UPhoenixImage;
class UOverlaySlot;
class UUniformGridPanel;
class UUI_BP_CreatureInNurtureSpaceTooltip_C;
class UUI_BP_CreatureButton_C;
class UUI_BP_InventoryIconButton_C;
class UUI_BP_CreatureAddToNurtureSpaceTooltip_C;
class AActor;
class UCreatureState;
class UUIManager;
class UCreatureManager;
class UMenuCursorWidget;
class ABiped_Player;
class UCreatureDefinition;
class UUMGSequencePlayer;
class UIconButtonWidget;
class UObject;
#pragma pack(push, 1)
class UUI_BP_CreatureManagementScreen_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UWidgetAnimation* showDetailsPanel; // 0x378
    UWidgetAnimation* SNC_02_FadeOut; // 0x380
    UWidgetAnimation* BeastManagement_IN; // 0x388
    UWidgetAnimation* ShowErrorMessage; // 0x390
    UPhoenixTextBlock* activeBeastsCurrent; // 0x398
    UPhoenixTextBlock* ActiveBeastsLabel; // 0x3a0
    UPhoenixTextBlock* activeBeastsMax; // 0x3a8
    UBorder* beastManagementBorder; // 0x3b0
    UScaleBox* breedingScaleBox; // 0x3b8
    UOverlay* BreedingWarningBox; // 0x3c0
    UUI_BP_CreatureManagement_DetailsPanel_C* detailsPanel; // 0x3c8
    UPhoenixTextBlock* ErrorMessageText; // 0x3d0
    UImage* Icon; // 0x3d8
    UUI_BP_ItemScrollBox_C* inventoryScroll; // 0x3e0
    UPhoenixTextBlock* NoCreaturesMessage; // 0x3e8
    UCanvasPanel* NoCreaturesPanel; // 0x3f0
    UUI_BP_Legend_Horizontal_Screen_C* ScreenLegend; // 0x3f8
    UPhoenixImage* scrim; // 0x400
    UPhoenixTextBlock* speciesCurrent; // 0x408
    UPhoenixTextBlock* SpeciesLabel; // 0x410
    UPhoenixTextBlock* speciesMax; // 0x418
    UPhoenixTextBlock* StationTitle; // 0x420
    UUniformGridPanel* vivariumGrid; // 0x428
    UUI_BP_CreatureInNurtureSpaceTooltip_C* StatusWidgetTooltip; // 0x430
    FName NurturingSpaceID; // 0x438
    UUI_BP_CreatureButton_C* HoveredCreatureButton; // 0x440
    UUI_BP_InventoryIconButton_C* HoveredInventoryButton; // 0x448
    UUI_BP_CreatureAddToNurtureSpaceTooltip_C* AddCreatureTooltip; // 0x450
    bool IsScreenExitingToFollowScreen; // 0x458
    char pad_459[0x7];
    AActor* CreatureToFollow; // 0x460
    int32_t CurrentNumInventoryCreatures; // 0x468
    int32_t CurrentNumNurturingSpaceCreatures; // 0x46c
    bool CanReleaseToNurturingSpace; // 0x470
    bool SaveReleasedCreatureUIDInstead; // 0x471
    char pad_472[0x6];
    FString ReleasedCreatureUIDIdentifier; // 0x478
    UUI_BP_CreatureButton_C* currentVivariumButton; // 0x488
    bool canSelectCreature; // 0x490
    char pad_491[0x7];
    TArray<UUI_BP_CreatureButton_C*> VivariumCreatureButtons; // 0x498
    TArray<UCreatureState*> CurrentVivariumCreatures; // 0x4a8
    int32_t LastReleasedCreatureID; // 0x4b8
    char pad_4bc[0x4];
    TArray<FName> RequiredTypesToRelease; // 0x4c0
    TArray<int32_t> AlreadySelectedCreatureUIDs; // 0x4d0
    TArray<FHermesBPDelegateHandle> HermesHandles; // 0x4e0
    bool IsHiddenFromViewport; // 0x4f0
    char pad_4f1[0x7];
    static UUI_BP_CreatureManagementScreen_C* StaticClass();
    void AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void ClearNewStatus(FName CreatureID, FName Variation, UUI_BP_InventoryIconButton_C* Button, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FName CallFunc_Conv_StringToName_ReturnValue);
    void IsNewCreature(FName CreatureID, FName Variation, bool& IsNew, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, TArray<FName>& CallFunc_GetNewIndicatorCategory_NewIndicatorItems, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FName CallFunc_Conv_StringToName_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
    void GetNurtureSpaceCreaturesToDisplay(TArray<UCreatureState*>& CreatureStates);
    void FilterOutSNC_02SelectedCreatures(TArray<FInventoryResult>& InventoryResultsArray, TArray<FInventoryResult>& FilteredArray, TArray<FInventoryResult> FilteredResultsArray, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, FInventoryResult CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue, int32_t CallFunc_GetCreatureUIDFromVariationName_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
    void SaveSNC_02ReleasedCreature(UCreatureState* CreatureState, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue, FName CallFunc_GetTypeID_ReturnValue);
    void UpdateCreatureTooltipDescription(UCreatureState* HoveredCreatureState, FString& CreatureDescription, FString TempDescription, FString CallFunc_GetCreatureDisplayName_OutName, bool CallFunc_GetCreatureDisplayName_OutIsLocalizationKey, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsUnbornCreature_ReturnValue, bool CallFunc_IsPregnant_ReturnValue);
    void UpdateInventoryButtonEnabled(UUI_BP_InventoryIconButton_C* IconButton);
    void UpdateCreatureInInventoryTooltip(UCreatureState* CreatureState, bool CallFunc_Not_PreBool_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, TArray<EUMGInputAction> SNC_02_DisallowedActions, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue, UCreatureState* CallFunc_GetCreatureState_CreatureState, bool CallFunc_Get_Can_Summon_Creature_CanMoveCreature, FString CallFunc_Get_Can_Summon_Creature_ErrorMsgKey, bool CallFunc_IsHovered_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue, FString CallFunc_SummonCreature_OutErrorKey, bool CallFunc_SummonCreature_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FEventReply CallFunc_ReturnCreatureToInventory_Return_Value, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, TArray<EUMGInputAction>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4);
    void PlayScreenIntro(bool FromSubScreen);
    void ViewCreatureDetails(UUI_BP_CreatureButton_C* CreatureButton, UCreatureState* CreatureState, UCreatureState* CallFunc_GetCreatureState_CreatureState, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_GetMotherUID_ReturnValue, bool CallFunc_IsUnbornCreature_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByUID_ReturnValue, int32_t CallFunc_GetCreatureUID_ReturnValue, bool CallFunc_Get_Can_View_Creature_Details_CanMoveCreature, FString CallFunc_Get_Can_View_Creature_Details_ErrorMsgKey);
    void ReturnCreatureToInventory(UUI_BP_CreatureButton_C* ButtonPressed, FEventReply& Return_Value, UCreatureState* CurrentCreatureState, UCreatureState* CallFunc_GetCreatureState_CreatureState, int32_t CallFunc_GetCreatureUID_ReturnValue, UCreatureDefinition* CallFunc_GetDefinition_ReturnValue, bool CallFunc_IsUnbornCreature_ReturnValue, bool CallFunc_IsEgg_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue, ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue);
    void AddCreatureToNurtureSpace(UCreatureState* CreatureState, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_GetCreatureUID_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue, FString CallFunc_CanReleaseCreatureToNurturingSpace_OutErrorKey, bool CallFunc_CanReleaseCreatureToNurturingSpace_ReturnValue);
    void TriggerExitScreen(bool ToFollowScreen, bool Temp_bool_Variable, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t K2Node_Select_Default, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void Update_Creature_in_Nurture_Space_Tooltip(UCreatureState* CreatureState, TArray<FLegendItemData> Local_LegendData, bool Local_CanMoveOutOfNurtureSpace, bool Local_EnoughInventorySpaceForMove, bool CallFunc_GetCanMoveCreatureOutOfNurtureSpace_CanMoveCreature, FString CallFunc_GetCanMoveCreatureOutOfNurtureSpace_ErrorMsgKey, FLegendItemData K2Node_MakeStruct_LegendItemData, bool CallFunc_Get_Can_Summon_Creature_CanMoveCreature, FString CallFunc_Get_Can_Summon_Creature_ErrorMsgKey, FLegendItemData K2Node_MakeStruct_LegendItemData_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, bool CallFunc_Get_Can_View_Creature_Details_CanMoveCreature, FString CallFunc_Get_Can_View_Creature_Details_ErrorMsgKey, FLegendItemData K2Node_MakeStruct_LegendItemData_3, int32_t CallFunc_Array_Add_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue_3);
    void DisplayErrorMessage(FString Message, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void InitCreatureButton(UUI_BP_CreatureButton_C* ButtonWidget, UCreatureState* CreatureState);
    void PopulateCreatureList(TArray<UCreatureState*>& CreatureStates, int32_t MaxNumCreatures, int32_t MaxNumSpecies);
    void InitForNurturingSpace(bool PlayAddAnimation, TArray<FInventoryResult> InventoryResultsArray, UUI_BP_InventoryIconButton_C* CurrentInventoryButton, int32_t LastNumNurturingSpaceCreatures, int32_t LastNumInventoryCreatures, int32_t MaxNumSpecies, int32_t MaxNumCreatures, int32_t CallFunc_Multiply_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32_t CallFunc_Array_LastIndex_ReturnValue, UIconButtonWidget* CallFunc_Array_Get_Item, int32_t Temp_int_Variable, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess, UIconButtonWidget* CallFunc_Array_Get_Item_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_GetHolderMaxSlotsBP_ReturnValue, TArray<UCreatureState*>& CallFunc_GetNurtureSpaceCreaturesToDisplay_CreatureStates);
    void Finished_E8409943489DCF8C0282D6A9FFD4BE36();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Destruct();
    void OnCreatureHovered(UUI_BP_CreatureButton_C* CreatureButton);
    void OnCreatureUnhovered(UUI_BP_CreatureButton_C* CreatureButton);
    void OnInventoryButtonHovered(UIconButtonWidget* IconButton);
    void OnInventoryButtonUnhovered(UIconButtonWidget* IconButton);
    void OnCreatureClicked(UUI_BP_CreatureButton_C* CreatureButton);
    void OnCreatureChanged();
    void OnInventoryButtonClicked(UIconButtonWidget* IconButton);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnOutroEnded(int32_t OutroType);
    void OnCreatureSummoned();
    void SNC_02_BeastReleaseStarted(UObject* Caller, FString String);
    void OnIntroEnded(int32_t IntroType);
    void BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(UIconButtonWidget* Button);
    void BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature(UIconButtonWidget* Button);
    void BndEvt__UI_BP_CreatureManagementScreen_inventoryScroll_K2Node_ComponentBoundEvent_2_OnButtonUnhovered__DelegateSignature(UIconButtonWidget* Button);
    void ExecuteUbergraph_UI_BP_CreatureManagementScreen(int32_t EntryPoint, UIconButtonWidget* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, TArray<UCreatureState*>& K2Node_MakeArray_Array, int32_t Temp_int_Loop_Counter_Variable, UUI_BP_CreatureButton_C* K2Node_CustomEvent_CreatureButton_2, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_CreatureButton_C* K2Node_CustomEvent_CreatureButton_1, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, UCreatureManager* CallFunc_Get_ReturnValue, FName CallFunc_GetCurrentCreatureNurturingSpaceID_ReturnValue);
}; // Size: 0x4f8
#pragma pack(pop)
