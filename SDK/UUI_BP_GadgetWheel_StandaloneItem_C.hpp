#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UCreatureManager;
class UButton;
class UUIManager;
class UPhoenixRichTextBlock;
class UImage;
class UTexture2D;
class UObject;
class UMaterialInstanceDynamic;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_GadgetWheel_StandaloneItem_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnHoverAnimation; // 0x330
    UButton* BoundingBox; // 0x338
    UCanvasPanel* buttonPanel; // 0x340
    UPhoenixRichTextBlock* ButtonPrompt; // 0x348
    UImage* DeathTimerFill; // 0x350
    UCanvasPanel* imagePanel; // 0x358
    UImage* ItemImage; // 0x360
    UImage* NoMountIcon; // 0x368
    FName ItemName; // 0x370
    FString LegendString; // 0x378
    bool IsLocked; // 0x388
    char pad_389[0x3];
    FName HolderID; // 0x38c
    char pad_394[0x14];
    bool BroomMountIsUsable; // 0x3a8
    char pad_3a9[0x7];
    static UUI_BP_GadgetWheel_StandaloneItem_C* StaticClass();
    void CheckItemID(FString NewID, FString& NewItemID, bool CallFunc_EqualEqual_StrStr_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void GetTimeoutPct(float& pct, FString CreatureID, UCreatureManager* CallFunc_Get_ReturnValue, bool K2Node_SwitchName_CmpSuccess, float CallFunc_GetDeathTimeoutPercentage_ReturnValue, float CallFunc_FClamp_ReturnValue);
    void OnLoadItemIcon(UTexture2D* LoadedTexture, UObject* CallbackParam, UMaterialInstanceDynamic* iconImage, FString CreatureID, UImage* K2Node_DynamicCast_AsImage, bool K2Node_DynamicCast_bSuccess, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, float CallFunc_GetTimeoutPct_Pct, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void Toggle_Highlight(bool Is_Highlighted, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void SetUsability(bool IsUsable, bool Temp_bool_Variable, float CallFunc_SelectFloat_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, float CallFunc_GetTimeoutPct_Pct, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
    void SetItemName(FName ItemName, FString CallFunc_Conv_NameToString_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BP_GadgetWheel_StandaloneItem_BoundingBox_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_GadgetWheel_StandaloneItem(int32_t EntryPoint, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime);
    void OnClickEvent__DelegateSignature();
}; // Size: 0x3b0
#pragma pack(pop)
