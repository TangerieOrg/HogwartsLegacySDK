#pragma once
#include <cstdint>
#include "EAvatarPresetType.hpp"
#include "EGenderEnum.hpp"
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FGearItemID.hpp"
#include "FGeometry.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UScreen.hpp"
class UWidgetAnimation;
class UScaleBox;
class UUI_BP_MoneyBar_C;
class UUI_BP_AsyncLoadWrapper_C;
class UUI_BP_BackgroundSmoke_C;
class UUI_BP_Legend_Horizontal_Screen_C;
class UPhoenixTextBlock;
class UAsyncWidgetSwitcher;
class UPanelWidget;
class UUI_BP_FG_CategoryNavBarHorizontal_C;
class ULegendItem;
class UCustomizableCharacterComponent;
class ACharacter;
class UAsyncLoadWrapper;
class UAvatarCreatorPage;
class UCanvasPanelSlot;
class USizeBoxSlot;
class APawn;
class UUserWidget;
class ABiped_Player;
class AActor;
class UObject;
class UIconButtonWidget;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_Salon_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UWidgetAnimation* hideSalon; // 0x378
    UWidgetAnimation* showSalon; // 0x380
    UUI_BP_AsyncLoadWrapper_C* AsyncComplexion; // 0x388
    UUI_BP_AsyncLoadWrapper_C* AsyncEyebrows; // 0x390
    UUI_BP_AsyncLoadWrapper_C* AsyncHair; // 0x398
    UUI_BP_BackgroundSmoke_C* backgroundSmoke; // 0x3a0
    UAsyncWidgetSwitcher* creatorSwitcher; // 0x3a8
    UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x3b0
    UUI_BP_MoneyBar_C* moneyBar; // 0x3b8
    UUI_BP_FG_CategoryNavBarHorizontal_C* NavBarHorizontal; // 0x3c0
    UScaleBox* SalonScaleBox; // 0x3c8
    UPhoenixTextBlock* sectionText; // 0x3d0
    int32_t PageIndex; // 0x3d8
    EGenderEnum GenderRig; // 0x3dc
    char pad_3dd[0x3];
    TArray<UUI_BP_AsyncLoadWrapper_C*> CustomizationPages; // 0x3e0
    ULegendItem* LegendItemConfirm; // 0x3f0
    UCustomizableCharacterComponent* PlayerCustomizationComponent; // 0x3f8
    ACharacter* CachedPlayer; // 0x400
    char pad_408[0xd0];
    bool InitialLoadComplete; // 0x4d8
    char pad_4d9[0x7];
    TArray<FString> CustomizationPagesTitleKey; // 0x4e0
    int32_t CurrentMoney; // 0x4f0
    int32_t SalonCost; // 0x4f4
    FString CachedHeadAppearance; // 0x4f8
    FString CachedFaceAppearance; // 0x508
    int32_t HoveredNavBarIndex; // 0x518
    char pad_51c[0x4];
    ULegendItem* LegendItemSelect; // 0x520
    ULegendItem* LegendItemNotEnoughFunds; // 0x528
    ULegendItem* LegendItemBack; // 0x530
    bool ShouldDiscardChanges; // 0x538
    char pad_539[0x7];
    static UUI_BP_Salon_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_Salon_1();
    void SequenceEvent__ENTRYPOINTUI_BP_Salon_0();
    void ScrollSelectedItemIntoView(int32_t PageIndex, bool K2Node_SwitchInteger_CmpSuccess, UAvatarCreatorPage* K2Node_DynamicCast_AsAvatar_Creator_Page, bool K2Node_DynamicCast_bSuccess);
    void AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, FMargin K2Node_MakeStruct_Margin_3, float K2Node_MathExpression_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, FMargin K2Node_MakeStruct_Margin_4, FMargin K2Node_MakeStruct_Margin_5, FMargin K2Node_MakeStruct_Margin_6, float CallFunc_Add_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_7, USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue);
    void RestoreInitialGearAppearances(APawn* BipedPlayer, FGearItemID CallFunc_GetActorEquippedGearItemID_ReturnValue, bool CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue, bool CallFunc_RemoveGearAppearanceOverride_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FGearItemID CallFunc_GetActorEquippedGearItemID_ReturnValue_1, bool CallFunc_RemoveGearAppearanceOverride_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, bool CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue_1);
    void EquipInvisibleGearAppearances(bool CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue, bool CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue_1, FString CallFunc_GetEquippedGearAppearanceOverrideID_ReturnValue, FString CallFunc_GetEquippedGearAppearanceOverrideID_ReturnValue_1);
    void ConfirmButtonHoldReleased(ULegendItem* LegendItem, bool HoldWasCompleted);
    void InitLegend(TArray<FLegendItemData> TempLegendItems);
    void RefreshTitleKey(FString CallFunc_Array_Get_Item);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, FString CallFunc_Array_Get_Item);
    void VO_OnExitMenu(FString CallFunc_MakeLiteralString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue);
    void VO_OnItemPurchasedFailedNoMoney(FString CallFunc_MakeLiteralString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue);
    void VO_OnLeavePreview(FString CallFunc_MakeLiteralString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue);
    void VO_OnGearPreview(FString CallFunc_MakeLiteralString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue);
    void VO_OnItemPurchased(FString CallFunc_MakeLiteralString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue);
    void VO_OnEnterVendor(FString CallFunc_MakeLiteralString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6);
    void DiscardChanges(UPanelWidget* CallFunc_GetParent_ReturnValue);
    void ConfirmChanges(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue);
    void UpdateCurrentPreset(EAvatarPresetType PresetType, FName PresetId);
    void UpdatePreviewActor(EAvatarPresetType PresetType, FName PresetName);
    void On_Preset_Selected(EAvatarPresetType PresetType, FString PrestName, FName CallFunc_Conv_StringToName_ReturnValue);
    void AvatarPresetDefinitionsMapToStringMaps();
    void ChildPageLoaded(UAsyncLoadWrapper* Child);
    void Category_Switch(int32_t NewIndex);
    void GoToPage(int32_t PageIndex, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_GoToCategory_CategoryChanged);
    void StartBackgroundSmokeOutro();
    void Construct();
    void PresetButtonClicked(UObject* Caller, FString String);
    void OnInitialized();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void StartBackgroundSmokeIntro();
    void OnOutroEnded(int32_t OutroType);
    void BndEvt__UI_BP_Salon_AsyncHair_K2Node_ComponentBoundEvent_0_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference);
    void BndEvt__UI_BP_Salon_AsyncEyebrows_K2Node_ComponentBoundEvent_2_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference);
    void BndEvt__UI_BP_Salon_AsyncComplexion_K2Node_ComponentBoundEvent_3_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference);
    void BndEvt__UI_BP_Salon_creatorSwitcher_K2Node_ComponentBoundEvent_4_WidgetActiveEvent__DelegateSignature(UUserWidget* ActiveWidget);
    void BndEvt__UI_BP_Salon_NavBarHorizontal_K2Node_ComponentBoundEvent_5_ChangedCategory__DelegateSignature(int32_t NewCategoryIndex);
    void BndEvt__UI_BP_Salon_NavBarHorizontal_K2Node_ComponentBoundEvent_1_HoveredCategory__DelegateSignature(int32_t ButtonIndex, UIconButtonWidget* CategoryButton);
    void ExecuteUbergraph_UI_BP_Salon(int32_t EntryPoint, UObject* K2Node_CustomEvent_Caller, FString K2Node_CustomEvent_String, FString CallFunc_Split_LeftS, FString CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, EAvatarPresetType CallFunc_StringToPresetType_ReturnValue, TArray<UUI_BP_AsyncLoadWrapper_C*>& K2Node_MakeArray_Array, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t K2Node_Event_OutroType, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, UCustomizableCharacterComponent* CallFunc_GetComponentByClass_ReturnValue);
    void PresetSelected__DelegateSignature(EAvatarPresetType PresetType, FString PresetName);
    void ChangesDiscarded__DelegateSignature();
    void ChangesConfirmed__DelegateSignature();
}; // Size: 0x540
#pragma pack(pop)
