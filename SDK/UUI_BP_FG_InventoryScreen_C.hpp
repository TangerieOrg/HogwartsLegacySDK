#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EInventorySortType.hpp"
#include "EInventoryTabCategory.hpp"
#include "EUIDisplayMode.hpp"
#include "EUMGInputAction.hpp"
#include "FAnchors.hpp"
#include "FGeometry.hpp"
#include "FInventoryHolder.hpp"
#include "FInventoryResult.hpp"
#include "FLegendItemData.hpp"
#include "FLinearColor.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVector2D.hpp"
#include "UTabPageWidget.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UImage;
class UUI_BP_AsyncLoadWrapper_C;
class UPhoenixRichTextBlock;
class UTutorialSystem;
class UUIManager;
class UUI_BP_FG_InventoryDetails_C;
class UCircularThrobber;
class UUI_BP_ItemScrollBox_C;
class UPhoenixTextBlock;
class UButton;
class ULegendItem;
class UUserWidget;
class UClass;
class UInventoryState;
class UUI_BP_HowMany_C;
class UIconButtonWidget;
class UUI_BP_InventoryIconButton_C;
class UCreatureManager;
class UFieldGuideMenu;
class UUI_BP_FieldGuide_C;
class UUMGSequencePlayer;
class APlayerController;
class UMenuCursorWidget;
class UObject;
class UAsyncLoadWrapper;
#pragma pack(push, 1)
class UUI_BP_FG_InventoryScreen_C : public UTabPageWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
    UWidgetAnimation* fadeInInspectable; // 0x3d0
    UWidgetAnimation* IntroAnim; // 0x3d8
    UWidgetAnimation* OutroAnim; // 0x3e0
    UWidgetAnimation* FadeOutTooltip; // 0x3e8
    UWidgetAnimation* FadeInTooltip; // 0x3f0
    UUI_BP_AsyncLoadWrapper_C* AsyncNavBar; // 0x3f8
    UImage* categoryIcon; // 0x400
    UUI_BP_FG_InventoryDetails_C* detailsPanel; // 0x408
    UCanvasPanel* InspectablePanel; // 0x410
    UUI_BP_ItemScrollBox_C* InventoryScrollBox; // 0x418
    UPhoenixRichTextBlock* InventorySortText; // 0x420
    UCircularThrobber* Loadingwidget; // 0x428
    UPhoenixTextBlock* menuBoxTitle; // 0x430
    UCanvasPanel* Root; // 0x438
    UButton* SortLeftButton; // 0x440
    UButton* SortRightButton; // 0x448
    char pad_450[0x10];
    UUserWidget* InventoryPopout; // 0x460
    EUIDisplayMode UIMode; // 0x468
    char pad_469[0x17];
    UUserWidget* Current_IconButton; // 0x480
    TArray<FInventoryResult> PlayerInventory; // 0x488
    FName InteractTargetID; // 0x498
    UUserWidget* InspectableWidget; // 0x4a0
    UClass* RichPaperClass; // 0x4a8
    UUserWidget* ParentContainer; // 0x4b0
    int32_t InventoryRows; // 0x4b8
    int32_t InventoryColumns; // 0x4bc
    FTimerHandle ToolTipTimer; // 0x4c0
    UInventoryState* InventoryState; // 0x4c8
    EInventoryTabCategory InventoryCategory; // 0x4d0
    char pad_4d1[0x3];
    float IconButtonSize; // 0x4d4
    UClass* IconButtonClass; // 0x4d8
    FName InteractTargetHolderID; // 0x4e0
    TArray<void*> AvailableTabNames; // 0x4e8
    UUI_BP_HowMany_C* howMany; // 0x4f8
    bool Transfer_Drop; // 0x500
    char pad_501[0x7];
    UUserWidget* ActiveButton; // 0x508
    bool ToInventory; // 0x510
    char pad_511[0x3];
    FLinearColor HouseColor; // 0x514
    bool PickPocketing; // 0x524
    char pad_525[0x3];
    TArray<FName> NewItemsList; // 0x528
    bool ReadyToUse; // 0x538
    char pad_539[0x3];
    int32_t AsyncLoadCount; // 0x53c
    TArray<FName> TutorialItemNames; // 0x540
    TArray<FName> InventoryHolders; // 0x550
    TArray<FInventoryHolder> InventoryHolderStructures; // 0x560
    int32_t Category; // 0x570
    char pad_574[0x54];
    bool CategoriesAreSetup; // 0x5c8
    char pad_5c9[0x7];
    FTimerHandle ShowTimerHandle; // 0x5d0
    FTimerHandle HideTimerHandle; // 0x5d8
    bool isDetailsShowing; // 0x5e0
    char pad_5e1[0x3];
    float CurrentHoverTime; // 0x5e4
    bool isButtonHovered; // 0x5e8
    char pad_5e9[0x3];
    float HoverTimeFinal; // 0x5ec
    char pad_5f0[0x50];
    int32_t InventoryIconCount; // 0x640
    EInventorySortType CurrentInventorySort; // 0x644
    EInventorySortType NUM_SORT_TYPES; // 0x645
    char pad_646[0x2];
    FString CurrentCategory; // 0x648
    int32_t DropButtonIndex; // 0x658
    char pad_65c[0x4];
    FInventoryResult ItemToDrop; // 0x660
    bool IsInspectableShown; // 0x6e8
    char pad_6e9[0x3];
    int32_t HoveredNavBarIndex; // 0x6ec
    static UUI_BP_FG_InventoryScreen_C* StaticClass();
    void I_GetInventoryTabCategory(EInventoryTabCategory& TabCategory);
    void GetInteractTargetInfo(FName& TargetId, FName& TargetHolderID);
    void I_GetInventory(UUserWidget*& Inventory);
    void I_ClickHandler(bool& Handled, bool CallFunc_HandleClicked_ReturnValue);
    void I_RemoveInspectable(bool& Removed, bool CallFunc_RemoveInspectable_Removed);
    void GetPlayerInventory(TArray<FInventoryResult>& PlayerInventory);
    void GetScrollBox(UUserWidget*& InventoryScrollBox);
    void UMGInputHandler(EUMGInputAction InputAction, EInputEvent InputEvent, bool& Handled, bool CallFunc_HandleUMGInputAction_ReturnValue);
    void ClickHandler(bool& Handled, bool CallFunc_HandleClicked_ReturnValue);
    void GetItemBox(UUserWidget*& ItemBox);
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    void CenterInspectableScreenVertically(float CurrentHeight, float IdealHeight, float CurrentRatio, float IdealRatio, FVector2D CallFunc_MakeVector2D_ReturnValue, float K2Node_MathExpression_ReturnValue, float K2Node_MathExpression_ReturnValue_1, float CallFunc_Abs_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FVector2D CallFunc_GetViewportSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue);
    void GetButtonNewIndicatorName(UIconButtonWidget* Button, FString& NewIndicatorString);
    void TerminateLingeringTutorials(UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_ForceCompleteTutorial_ReturnValue, bool CallFunc_ForceCompleteTutorial_ReturnValue_1, bool CallFunc_ForceCompleteTutorial_ReturnValue_2, bool CallFunc_ForceCompleteTutorial_ReturnValue_3);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool CallFunc_IsValid_ReturnValue, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess);
    void RefreshLegend(TArray<FLegendItemData>& TooltipLegendArray, TArray<FLegendItemData> TempTooltipLegend, TArray<FLegendItemData> TempLegendItems, UCreatureManager* CallFunc_Get_ReturnValue, bool CallFunc_IsValid_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData_1, int32_t CallFunc_Array_Add_ReturnValue_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, int32_t CallFunc_Array_Add_ReturnValue_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, FLegendItemData K2Node_MakeStruct_LegendItemData_4, int32_t CallFunc_Array_Add_ReturnValue_3, int32_t CallFunc_Array_Add_ReturnValue_4, FLegendItemData K2Node_MakeStruct_LegendItemData_5, int32_t CallFunc_Array_Add_ReturnValue_5, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess);
    void SaveCurrentSortPreference(UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue);
    void ReadSavedSortPreference(UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FString CallFunc_GetPlayerInventorySortPreference_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
    void FindNextValidSortForCategory(FString Category, int32_t Delta, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Conv_ByteToInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValidSortForCategory_Result);
    void IsValidSortForCategory(EInventorySortType SortType, FString Category, bool& Result, bool K2Node_SwitchString_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5);
    void CycleSortType(int32_t Delta, int32_t K2Node_MathExpression_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8_t CallFunc_Conv_IntToByte_ReturnValue, uint8_t CallFunc_GetValidValue_ReturnValue);
    void KillActiveTutorial();
    void PlayOneTimeTutorial(FString Category, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_AddNewStat_ReturnValue, bool CallFunc_StartTutorial_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_StatExists_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void Setup_Categories(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void Get_Inventory_Structures_Data(bool CallFunc_IsValid_ReturnValue, TArray<FInventoryHolder>& CallFunc_GetInventoryItemData_ReturnValue);
    void GetTutorialHighlight(TArray<FName>& ItemNames, TArray<FName> ReturnValue, TArray<FName>& K2Node_MakeArray_Array, FName CallFunc_GetStatName_ReturnValue, int32_t CallFunc_ReadStat_ReturnValue, FString CallFunc_GetMissionStepBP_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, UUIManager* CallFunc_Get_ReturnValue, bool CallFunc_GetInMenuTransition_ReturnValue, UFieldGuideMenu* CallFunc_GetFieldGuideWidget_ReturnValue, UUI_BP_FieldGuide_C* K2Node_DynamicCast_AsUI_BP_Field_Guide, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4);
    void ShowAmountWidget(int32_t Max, FName ItemName);
    void ShowSort_Label(FString Sort_Type);
    void Setup_Tooltip(UUserWidget* Button, TArray<FLegendItemData>& TooltipLegend, bool CapturedCreature, FInventoryResult L_InventoryResult, UUI_BP_InventoryIconButton_C* L_InventoryButton, TArray<FLegendItemData> ButtonLegendData, bool IsAlbino, bool IsMale, bool TranslateTitle, bool bIsGivenName, FString Title, FString QualityString, FString ItemName, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<FLegendItemData>& CallFunc_GetTooltipLegendData_LegendData);
    void ComputeIconSizeForPage(bool IsQuestItemCategory);
    void SetupItemScrollBox(UClass* ButtonClass, EInventoryTabCategory CurCategory, int32_t CurrentInventorySize, int32_t CallFunc_GetHolderMaxSlotsBP_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Multiply_IntInt_ReturnValue, bool Temp_bool_Variable, int32_t CallFunc_Max_ReturnValue, int32_t K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue_1, EInventoryTabCategory CallFunc_GetInventoryTabCategory_InventoryTabCategory, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void ResizeInventory(EInventoryTabCategory CurCategory, UUserWidget* Button, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, EInventoryTabCategory CallFunc_GetInventoryTabCategory_InventoryTabCategory, int32_t CallFunc_Array_Length_ReturnValue, UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess);
    void SetCreatureInventoryTooltipInformation(UUserWidget* InButton);
    void GetInventoryTabCategory(EInventoryTabCategory& InventoryTabCategory);
    void MarkSelectedItems(TArray<FString>& Items, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess);
    void SetCurrentHighlightedItem(FString NewItem, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue);
    void SetInventoryState(EUIDisplayMode DisplayMode);
    void AddInspectable(FString RichPaperID, FMargin K2Node_MakeStruct_Margin, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FAnchors K2Node_MakeStruct_Anchors, TArray<FLegendItemData>& CallFunc_RefreshLegend_TooltipLegendArray, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUserWidget* CallFunc_Create_ReturnValue);
    void RemoveInspectable(bool& Removed, TArray<FLegendItemData>& CallFunc_RefreshLegend_TooltipLegendArray, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_RemoveChild_ReturnValue);
    void OnUnhovered(UUIManager* CallFunc_Get_ReturnValue, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue);
    void InitButtonsToEmpty(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FInventoryResult K2Node_MakeStruct_InventoryResult, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, UIconButtonWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void UpdateAllButtons(TArray<FInventoryResult>& Inventory, int32_t CurrentInventorySize, bool isQuestItems, int32_t Offset, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FInventoryResult CallFunc_Array_Get_Item, UIconButtonWidget* CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, UIconButtonWidget* CallFunc_Array_Get_Item_2, FString CallFunc_GetButtonNewIndicatorName_NewIndicatorString);
    void InitNavbar();
    void Refresh_Inventory(bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue);
    void IconButton_Unhovered(UObject* Button, TArray<FLegendItemData>& CallFunc_RefreshLegend_TooltipLegendArray, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void IconButton_Clicked(UObject* Button, bool CallFunc_ClickHandler_Handled, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void IconButton_Hover(FString InventoryItemName, FName CallFunc_Conv_StringToName_ReturnValue, int32_t Temp_int_Array_Index_Variable, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, TArray<FLegendItemData>& CallFunc_RefreshLegend_TooltipLegendArray, FName CallFunc_Conv_StringToName_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue_2, UIconButtonWidget* CallFunc_Array_Get_Item, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess);
    void InitInventory(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UUserWidget* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, UUI_BP_InventoryIconButton_C* K2Node_DynamicCast_AsUI_BP_Inventory_Icon_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
    void OnLoaded_97F954DF4B2BFC8E82EF19BE04A37EDD(UClass* Loaded);
    void OnLoaded_8DA06735455F217B13C1A8853936776A(UClass* Loaded);
    void OnLoaded_627C7C8846B3845375AEA1B3524C9FA0(UClass* Loaded);
    void SetStride(int32_t Stride);
    void ShowNavBar(bool ShouldShow);
    void I_RefreshInventory();
    void SetPickPocketing(bool PickPocketing);
    void I_ShowAmountWidget(int32_t Max, FName ItemName);
    void SetCurrentIconButton(UUserWidget* CurrentButton);
    void SetToInventory(bool ToInventory);
    void I_Sort();
    void SetButtonTransferDrop(bool Transfer_Drop);
    void I_InitButtonsToEmpty();
    void I_SetActiveButton(UUserWidget* Button);
    void I_AddInspectable(FString RichPaperID);
    void InventoryData();
    void Construct();
    void Destruct();
    void NavBar_SelectionChanged(UObject* Caller, int32_t int);
    void NavBar_HoveredCategory(UObject* Caller, int32_t int);
    void GoToPage0(TArray<FString>& DestinationStack);
    void InventoryAmountWidgetEvent(UObject* Caller, int32_t int);
    void OnNavBarSelectionChanged(int32_t NewCategoryIndex);
    void ClearCategory(FName CategoryName);
    void I_SetInventoryCategory(EInventoryTabCategory Category);
    void InventoryIconButtonClicked(UObject* Button);
    void InventoryIconButtonUnhovered(UObject* Button);
    void InventoryIconButtonHovered(UObject* Button);
    void Load_Class();
    void OnNavLoadComplete(UAsyncLoadWrapper* SelfReference);
    void SetInteractTargetInfo(FName TargetId, FName TargetHolderID);
    void NavBar_UnhoveredCategory(UObject* Caller, int32_t int);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void LeaveFromPage0();
    void SetMode(EUIDisplayMode UIDisplayMode);
    void InEditorPostConstruct();
    void Initialize();
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void SetParent(UUserWidget* Parent);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void I_SetParent(UUserWidget* NewParam);
    void OnLegendItemHoldEnd0(ULegendItem* LegendItem, bool HoldWasCompleted);
    void BndEvt__UI_BP_FG_InventoryScreen_SortLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_BP_FG_InventoryScreen_SortRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void OnIntroEnded(int32_t IntroType);
    void BndEvt__UI_BP_FG_InventoryScreen_detailsPanel_K2Node_ComponentBoundEvent_2_LegendHoldItemReleased__DelegateSignature(ULegendItem* InventoryLegendItem, bool HoldWasCompleted);
    void ExecuteUbergraph_UI_BP_FG_InventoryScreen(int32_t EntryPoint, UClass* K2Node_CustomEvent_Loaded, UClass* Temp_class_Variable, UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess);
    void AbortInteraction__DelegateSignature();
    void OnClickedEventDispatcher__DelegateSignature(UObject* Category);
}; // Size: 0x6f0
#pragma pack(pop)
