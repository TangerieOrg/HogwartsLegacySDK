#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UPhoenixUserWidget.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UImage;
class UButton;
class UPhoenixImage;
class UPhoenixTextBlock;
class UUI_BP_NewIndicator_C;
class UMaterialInstanceDynamic;
class ABiped_Player;
class UUIManager;
class UUMGSequencePlayer;
class UTexture2D;
class UObject;
#pragma pack(push, 1)
class UUI_BP_GadgetWheelItem_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnHoverAnimation; // 0x330
    UWidgetAnimation* SelectedAnimation; // 0x338
    UImage* ActiveFlames; // 0x340
    UImage* ActiveGlow; // 0x348
    UCanvasPanel* ActiveHighlight; // 0x350
    UPhoenixImage* ActiveSparks; // 0x358
    UImage* BackgroundFill; // 0x360
    UButton* BoundingBox; // 0x368
    UCanvasPanel* buttonContent; // 0x370
    UCanvasPanel* Count; // 0x378
    UPhoenixImage* goldLeafHighlight; // 0x380
    UPhoenixTextBlock* ItemCountText; // 0x388
    UImage* ItemIcon; // 0x390
    UImage* LockedImage; // 0x398
    UUI_BP_NewIndicator_C* newIndicator; // 0x3a0
    UImage* Outline; // 0x3a8
    UPhoenixImage* selectedGlow; // 0x3b0
    UPhoenixImage* selectedOutline; // 0x3b8
    bool IsLocked; // 0x3c0
    char pad_3c1[0x3];
    FName ItemName; // 0x3c4
    char pad_3cc[0x14];
    int32_t WedgePosition; // 0x3e0
    char pad_3e4[0x4];
    FSlateColor DefaultHighlightColor; // 0x3e8
    char pad_410[0x50];
    static UUI_BP_GadgetWheelItem_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void SetActiveHighlightColor(bool Temp_bool_Variable, FSlateColor CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FSlateColor K2Node_Select_Default);
    void UpdateFillMeter(float FillPercentage, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_GetPotionDuration_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, float CallFunc_GetAbilityDurationRemaining_ReturnValue, bool CallFunc_GetAbilityActive_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2);
    void SetNewItemIndicatorVisibility(bool IsUnlocked, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_IsItemNew_ReturnValue);
    void ToggleHighlight(bool isHighlighted, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void SetItemData(FName ItemName, int32_t Count, bool IsUnlocked, ESlateVisibility Temp_byte_Variable);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ItemMeterIconLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void UpdateToolMeter(float Percentage);
    void ExecuteUbergraph_UI_BP_GadgetWheelItem(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, float CallFunc_GetRenderTransformAngle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, UTexture2D* K2Node_CustomEvent_LoadedTexture, UObject* K2Node_CustomEvent_CallbackParam, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_CustomEvent_Percentage);
    void OnClickEvent__DelegateSignature();
}; // Size: 0x460
#pragma pack(pop)
