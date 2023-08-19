#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "ESpellCategory.hpp"
#include "EUIQActionBarType.hpp"
#include "FDataTableRowHandle.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UActionRingItem.hpp"
class UUMGSequencePlayer;
class UCanvasPanel;
class UWidgetAnimation;
class UBorder;
class UImage;
class UButton;
class UTexture2D;
class UMaterialInstanceDynamic;
class UWidget;
class UObject;
#pragma pack(push, 1)
class UUI_BP_ActionRingItem_C : public UActionRingItem {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2a0
    UWidgetAnimation* FailedCast; // 0x2a8
    UWidgetAnimation* ShowSpellFull; // 0x2b0
    UBorder* emptyBorder; // 0x2b8
    UImage* epmtyOutline; // 0x2c0
    UImage* ItemIcon; // 0x2c8
    UImage* itemMeter; // 0x2d0
    UImage* Outline; // 0x2d8
    UImage* SelectedHighlight; // 0x2e0
    UCanvasPanel* TempItem; // 0x2e8
    UImage* TempItemBackground; // 0x2f0
    UImage* TempItemIcon; // 0x2f8
    UButton* TheButton; // 0x300
    UMaterialInstanceDynamic* EnergyMaterial; // 0x308
    bool isSpellFull; // 0x310
    char pad_311[0x3];
    int32_t directionIndex; // 0x314
    float renderAngle; // 0x318
    char pad_31c[0x24];
    bool IsBlacklisted; // 0x340
    char pad_341[0x7];
    static UUI_BP_ActionRingItem_C* StaticClass();
    void I_GetIconName(FString& IconName);
    void SetSpellMeterColor(ESpellCategory SpellCategory, FDataTableRowHandle TempColorTag, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, bool K2Node_SwitchEnum_CmpSuccess, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_2, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_3, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_4, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_5, FLinearColor CallFunc_GetColorByTag_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void ToggleEmptyItem(bool IsEmptySlot, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
    void FillMeter(float NewPct, bool IsASpell, bool CallFunc_LessEqual_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue);
    void I_SetIconSize(FVector2D Size);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnIconTextureLoaded(UTexture2D* Texture);
    void I_AddExtraContent(UWidget* NewContent);
    void I_SetIconName(FString IconName);
    void SetSubWidgetVisibility(EUIQActionBarType ItemType);
    void OnUpdateMeter(float pct, bool IsASpell);
    void OnSetItemInventoryData(bool IsConsumable, int32_t ItemCount);
    void WidgetAnimationEvt_ShowSpellFull_K2Node_WidgetAnimationEvent_0();
    void OnToggleEmptyItem(bool IsEmpty);
    void OnHideItemCount();
    void OnOverlayTextureLoaded(UTexture2D* Texture);
    void OnItemIconTextureLoaded(UTexture2D* Texture);
    void ToggleSelectionHighlight(bool Show);
    void I_SetImage(FString ImageName);
    void MarkSpellAsBlacklisted();
    void ClearSpellAsBlacklisted();
    void OnSpellCastFailed();
    void SetColorBlindMode(UObject* Caller, int32_t int);
    void ExecuteUbergraph_UI_BP_ActionRingItem(int32_t EntryPoint, ESpellCategory CallFunc_GetSpellCategory_ReturnValue, bool K2Node_Event_IsDesignTime, UTexture2D* K2Node_Event_Texture_2, UWidget* K2Node_Event_NewContent, FString K2Node_Event_IconName, FVector2D K2Node_Event_Size, EUIQActionBarType K2Node_Event_ItemType, float K2Node_Event_pct, bool K2Node_Event_IsASpell, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsConsumable, int32_t K2Node_Event_ItemCount, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsEmpty, UTexture2D* K2Node_Event_Texture_1);
    void UnBlacklisted__DelegateSignature();
    void Blacklisted__DelegateSignature();
}; // Size: 0x348
#pragma pack(pop)
