#pragma once
#include <cstdint>
#include "EGearSlotIDEnum.hpp"
#include "EIconButtonState.hpp"
#include "ESlateVisibility.hpp"
#include "FGearItemID.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UIconButtonWidget.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UOverlay;
class USizeBox;
class UImage;
class UPhoenixImage;
class UBorder;
class UUI_BP_NewIndicator_C;
class UClass;
class UWidget;
class UTexture2D;
class UObject;
class UUMGSequencePlayer;
class UCanvasPanelSlot;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UUI_BP_AppearanceIcon_C : public UIconButtonWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x4a8
    UWidgetAnimation* OnSelected; // 0x4b0
    UWidgetAnimation* TutorialBounce; // 0x4b8
    UWidgetAnimation* OnButtonHovered; // 0x4c0
    UOverlay* appearanceContent; // 0x4c8
    UImage* AppearanceImage; // 0x4d0
    UPhoenixImage* emptyIcon; // 0x4d8
    USizeBox* iconSizeBox; // 0x4e0
    UUI_BP_NewIndicator_C* newIndicator; // 0x4e8
    UPhoenixImage* normalBorder; // 0x4f0
    UCanvasPanel* ParentCanvas; // 0x4f8
    UImage* selected; // 0x500
    UPhoenixImage* selectedBorder; // 0x508
    UPhoenixImage* selectedGlitter; // 0x510
    UPhoenixImage* specialBorder; // 0x518
    UBorder* TutorialHighlight; // 0x520
    char pad_528[0x30];
    bool IsSelected; // 0x558
    char pad_559[0x7];
    UClass* CursorClass; // 0x560
    FGearItemID AppearanceID; // 0x568
    char pad_57c[0x4];
    FString AppearanceName; // 0x580
    FName AppearanceVariation; // 0x590
    EGearSlotIDEnum AppearanceSlotType; // 0x598
    char pad_599[0x7];
    static UUI_BP_AppearanceIcon_C* StaticClass();
    void I_GetIconName(FString& IconName);
    void SetIsNewItem(bool IsNew);
    bool HandleMissing0();
    void SetInitSelected(bool IsSelected);
    void InitAppearanceItem(FGearItemID AppearanceID, bool isCostume, ESlateVisibility Temp_byte_Variable, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_SetInventoryIconOverride_OutDisplayName, FString CallFunc_SetInventoryIconOverride_OutIconName, bool CallFunc_SetInventoryIconOverride_OutIsNameTranslatable, bool CallFunc_SetInventoryIconOverride_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
    void SetAppearanceIcon(FString AppearanceID);
    void SetButtonSize0(FVector2D NewSize, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
    void SetIsLocked(bool IsLocked, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetIsCurrentSelection(bool IsCurrent);
    void SetIsSelected(bool buttonSelected);
    bool IsInteractable();
    void I_SetIconName(FString IconName);
    void I_SetImage(FString ImageName);
    void I_AddExtraContent(UWidget* NewContent);
    void I_SetIconSize(FVector2D Size);
    void Construct();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TheButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void HighlightButton0(bool isHighlighted);
    void SetButtonState0(EIconButtonState NewState);
    void SetIsNew0(bool bIsNew);
    void SetIsTutorialHighlighted0(bool bIsTutorialHighlighted);
    void OnAppearanceIconLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void ExecuteUbergraph_UI_BP_AppearanceIcon(int32_t EntryPoint, UWidget* K2Node_Event_NewContent, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_AddExtraContent_ReturnValue, FVector2D K2Node_Event_Size, bool K2Node_Event_isHighlighted, EIconButtonState K2Node_Event_NewState, bool CallFunc_HandleEnabled_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HandleDisabled_ReturnValue, bool CallFunc_HandleMissing_ReturnValue, bool CallFunc_HandleNonExistent_ReturnValue, FString K2Node_Event_ImageName, bool CallFunc_NotEqual_StrStr_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool K2Node_Event_bIsNew, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool K2Node_Event_bIsTutorialHighlighted, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, FString K2Node_Event_IconName, UTexture2D* K2Node_CustomEvent_LoadedTexture, UObject* K2Node_CustomEvent_CallbackParam, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void OnClickedAppearance__DelegateSignature(UUI_BP_AppearanceIcon_C* AppearanceButton);
    void OnUnhoveredAppearance__DelegateSignature(UUI_BP_AppearanceIcon_C* AppearanceButton);
    void OnHoveredAppearnace__DelegateSignature(UUI_BP_AppearanceIcon_C* AppearanceButton);
}; // Size: 0x5a0
#pragma pack(pop)
