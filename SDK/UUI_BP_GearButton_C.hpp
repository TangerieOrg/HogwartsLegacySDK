#pragma once
#include <cstdint>
#include "EGearSlotIDEnum.hpp"
#include "EIconButtonState.hpp"
#include "ESlateVisibility.hpp"
#include "FDataTableRowHandle.hpp"
#include "FGearItem.hpp"
#include "FGearItemID.hpp"
#include "FGearStatRecipeData.hpp"
#include "FItemProperties.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "GearStatType.hpp"
#include "UIconButtonWidget.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UScaleBox;
class USizeBox;
class UImage;
class UPhoenixImage;
class UNamedSlot;
class UUI_BP_GearThreadSlot_C;
class UUI_BP_NewIndicator_C;
class UOverlay;
class UUI_BP_SelectedBox_C;
class UClass;
class UUMGSequencePlayer;
class UGearManager;
class UExperienceManager;
class UWidget;
class UUserWidget;
class UPanelSlot;
#pragma pack(push, 1)
class UUI_BP_GearButton_C : public UIconButtonWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4a8
    UWidgetAnimation* OnReset; // 0x4b0
    UWidgetAnimation* traitLoop; // 0x4b8
    UWidgetAnimation* upgradeLoop; // 0x4c0
    UWidgetAnimation* TutorialPulse; // 0x4c8
    UWidgetAnimation* OnHover; // 0x4d0
    UWidgetAnimation* buttonActive; // 0x4d8
    UImage* appearanceIcon; // 0x4e0
    UImage* buttonHighlight; // 0x4e8
    UNamedSlot* ContentSlot; // 0x4f0
    UImage* disabledGraphic; // 0x4f8
    UPhoenixImage* dropShadow; // 0x500
    USizeBox* gearSizeBox; // 0x508
    UImage* hoodIcon; // 0x510
    UUI_BP_NewIndicator_C* indicator; // 0x518
    UOverlay* lockedOverlay; // 0x520
    UPhoenixImage* loomInteract; // 0x528
    UScaleBox* newIndicator; // 0x530
    UPhoenixImage* PhoenixImage_156; // 0x538
    UPhoenixImage* rarityBack; // 0x540
    UUI_BP_SelectedBox_C* selectedBox; // 0x548
    UPhoenixImage* selectedOutline; // 0x550
    UUI_BP_GearThreadSlot_C* thread1; // 0x558
    UCanvasPanel* Traits; // 0x560
    UPhoenixImage* upgradeArrow; // 0x568
    char pad_570[0x30];
    bool IsSelected; // 0x5a0
    char pad_5a1[0x7];
    UClass* CursorClass; // 0x5a8
    FName GearVariation; // 0x5b0
    FName ItemRarity; // 0x5b8
    FLinearColor OutlineColor; // 0x5c0
    EGearSlotIDEnum SlotType; // 0x5d0
    bool IsHoodUp; // 0x5d1
    char pad_5d2[0x6];
    FString ItemId; // 0x5d8
    float ButtonWidth; // 0x5e8
    float ButtonHeight; // 0x5ec
    bool hasStats; // 0x5f0
    bool IsEmpty; // 0x5f1
    bool IsLocked; // 0x5f2
    bool isUnidentified; // 0x5f3
    bool canUpgrade; // 0x5f4
    bool canApplyTrait; // 0x5f5
    char pad_5f6[0x2];
    FGearItemID GearItemID; // 0x5f8
    bool LoomCanInteract; // 0x60c
    bool HasMaxUpgrades; // 0x60d
    char pad_60e[0x2];
    FString DisabledTooltipMessage; // 0x610
    bool canShowButtonEvents; // 0x620
    char pad_621[0x7];
    static UUI_BP_GearButton_C* StaticClass();
    void I_GetIconName(FString& IconName);
    void ResetGearButtonState(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void SetHoodState(bool ShowHoodIcon, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void ResetButton();
    void OverrideGearIcon(FString tempOverrideID, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void ToggleLoomInteraction(bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3);
    void InitGearButton(FGearItemID GearID, bool IsAppearance, TArray<FName> TempTraits, FItemProperties CallFunc_GetItemProperties_ItemProperties, bool CallFunc_GetItemProperties_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_SetInventoryIconOverride_OutDisplayName, FString CallFunc_SetInventoryIconOverride_OutIconName, bool CallFunc_SetInventoryIconOverride_OutIsNameTranslatable, bool CallFunc_SetInventoryIconOverride_ReturnValue, UGearManager* CallFunc_Get_ReturnValue, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue, int32_t CallFunc_GetGearEmptyTraitSlots_ReturnValue);
    void GetButtonGearItem(FGearItem& GearItem, FGearItem CallFunc_GetGearItem_OutGearItem, bool CallFunc_GetGearItem_ReturnValue);
    void ToggleTraitNotification(bool ShowNotification, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetTraitAvailable(FGearItem CallFunc_GetButtonGearItem_GearItem, int32_t CallFunc_GetTotalAvailableTriats_TotalAvailableTraits, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetUpgradeAvailable(FGearItem TempGearItem, int32_t CallFunc_GetMaxUpgradeForGearItem_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FGearItem CallFunc_GetButtonGearItem_GearItem, bool CallFunc_BooleanOR_ReturnValue, GearStatType CallFunc_DefineSecondaryGearStatTypeFromSlot_ReturnValue, FGearStatRecipeData CallFunc_GetGearStatsUpgradeRecipe_ReturnValue);
    void ToggleUpgradeNotification(bool showUpgrade, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetInitSelected(bool IsSelected);
    void SetIsIdentified(int32_t IdentifiedIndex, int32_t Temp_int_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool K2Node_Select_Default);
    void SetItemLock(int32_t ItemLevel, UExperienceManager* CallFunc_Get_ReturnValue, int32_t CallFunc_GetExperienceLevel_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void SetIsNewItem(bool IsNew);
    void SetTraitSlots(TArray<FName>& TraitArray, int32_t emptyTraitCount, int32_t tempThreadCount, int32_t Temp_int_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable_1, bool CallFunc_IsValid_ReturnValue, FName CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void HideStatList(bool showStats);
    void ToggleAppearanceIcon(bool HasAppearance, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void ToggleHoodState();
    void SetRarityState(FName RarityTier, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, FDataTableRowHandle CallFunc_GetRarityColorTag_ColorTag);
    void SetIsSelected(bool buttonSelected, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    bool SetButtonIcons0(FString BackgroundImage);
    UWidget* GetExtraContent0(UWidget* CallFunc_GetChildAt_ReturnValue, UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess);
    bool HandleNonExistent0();
    bool HandleMissing0();
    bool HandleDisabled0();
    bool HandleEnabled0();
    bool RemoveExtraContent0(bool CallFunc_RemoveChildAt_ReturnValue);
    bool AddExtraContent0(UWidget* NewContent, UPanelSlot* CallFunc_AddChild_ReturnValue);
    bool SetState0(bool IsActive, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    bool IsInteractable();
    void I_SetIconSize(FVector2D Size);
    void I_SetIconName(FString IconName);
    void I_SetImage(FString ImageName);
    void I_AddExtraContent(UWidget* NewContent);
    void Construct();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void HighlightButton0(bool isHighlighted);
    void SetButtonState0(EIconButtonState NewState);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_GearButton(int32_t EntryPoint, FString K2Node_Event_IconName, FString K2Node_Event_ImageName, UWidget* K2Node_Event_NewContent, bool CallFunc_AddExtraContent_ReturnValue, bool K2Node_Event_isHighlighted, EIconButtonState K2Node_Event_NewState, bool CallFunc_HandleEnabled_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HandleDisabled_ReturnValue, bool CallFunc_HandleMissing_ReturnValue, bool CallFunc_HandleNonExistent_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, FVector2D K2Node_Event_Size, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void OnGearButtonClickEvent__DelegateSignature(UUI_BP_GearButton_C* IconButton);
    void OnGearButtonUnhoveredEvent__DelegateSignature(UUI_BP_GearButton_C* IconButton);
    void OnGearButtonHoveredEvent__DelegateSignature(UUI_BP_GearButton_C* IconButton);
}; // Size: 0x628
#pragma pack(pop)
