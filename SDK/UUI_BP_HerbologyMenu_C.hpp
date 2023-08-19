#pragma once
#include <cstdint>
#include "EHerbGrowthState.hpp"
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UScreen.hpp"
class UUI_BP_HerbologyGrown_C;
class UWidgetAnimation;
class UUI_BP_HerbologyApplyItems_C;
class ACharacter;
class UUI_BP_BackgroundSmoke_C;
class UImage;
class UWidgetSwitcher;
class UPhoenixTextBlock;
class UUI_BP_Legend_Horizontal_Screen_C;
class URetainerBox;
class UOverlay;
class UButton;
class ULegendItem;
class UUI_BP_HerbologySeedSelection_C;
class AHerbPlot;
class UHerbPlotState;
class UObject;
class AActor;
class AHerb;
class UUMGSequencePlayer;
class UWidget;
class UUI_BP_HerbologyFertilizerButton_C;
#pragma pack(push, 1)
class UUI_BP_HerbologyMenu_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UWidgetAnimation* ShowInventoryFullMessage; // 0x378
    UWidgetAnimation* Main_OUT; // 0x380
    UWidgetAnimation* ShowErrorMessage; // 0x388
    UUI_BP_HerbologyApplyItems_C* ApplyItemsWidget; // 0x390
    UUI_BP_BackgroundSmoke_C* backgroundSmoke; // 0x398
    UWidgetSwitcher* ContentWidgetSwitcher; // 0x3a0
    UImage* ErrorIcon; // 0x3a8
    UPhoenixTextBlock* ErrorMessageText; // 0x3b0
    UPhoenixTextBlock* ErrorMessageText_1; // 0x3b8
    UUI_BP_HerbologyGrown_C* GrownWidget; // 0x3c0
    URetainerBox* headerTitleRetainer; // 0x3c8
    UOverlay* LeftButtonOverlay; // 0x3d0
    UButton* NavLeftButton; // 0x3d8
    UButton* NavRightButton; // 0x3e0
    UPhoenixTextBlock* PlotContentsText; // 0x3e8
    UPhoenixTextBlock* PlotNameText; // 0x3f0
    UOverlay* RightButtonOverlay; // 0x3f8
    UUI_BP_Legend_Horizontal_Screen_C* ScreenLegend; // 0x400
    UUI_BP_HerbologySeedSelection_C* SeedSelectionWidget; // 0x408
    UPhoenixTextBlock* TitleText; // 0x410
    AHerbPlot* HerbPlot; // 0x418
    bool InputLocked; // 0x420
    char pad_421[0x3];
    float Current_Input_Timeout_Length; // 0x424
    AHerbPlot* PreviousHerbPlot; // 0x428
    UObject* ActiveLightRig; // 0x430
    ULegendItem* LegendItemPickup; // 0x438
    ULegendItem* LegendItemDestroy; // 0x440
    bool IsPanelTransitionInProgress; // 0x448
    char pad_449[0xa7];
    ULegendItem* LegendItemFactSheet; // 0x4f0
    ULegendItem* LegendItemSelect; // 0x4f8
    static UUI_BP_HerbologyMenu_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    void SetFadingEnabledForPlot(AHerbPlot* HerbPlot, bool FadingEnabled, bool AlsoForParentAcotr, AActor* CallFunc_GetParentActor_ReturnValue, AHerb* CallFunc_GetPlantedHerb_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, UHerbPlotState* CallFunc_GetPlotState_ReturnValue, FName CallFunc_GetPlantID_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UHerbPlotState* CallFunc_GetPlotState_ReturnValue_1, FName CallFunc_GetPlantID_ReturnValue_1, FName CallFunc_GetFertilizerID_ReturnValue, FName CallFunc_GetPlantByproductID_ReturnValue, bool CallFunc_GetHasInventorySpaceToHarvestPlantOfType_ReturnValue, FName CallFunc_GetItemInventoryFullString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, EHerbGrowthState CallFunc_GetGrowthState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void TriggerPanelChangeWithAnimation(bool CallFunc_Not_PreBool_ReturnValue);
    void SwitchToRightPlot(FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_IsInLineWithNeighbors_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool Temp_bool_Variable, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, bool K2Node_MathExpression_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, AHerbPlot* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
    void SwitchToLeftPlot(FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_IsInLineWithNeighbors_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool Temp_bool_Variable, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, bool K2Node_MathExpression_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, AHerbPlot* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
    void RefreshButtonLegend(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default, UHerbPlotState* CallFunc_GetPlotState_ReturnValue, EHerbGrowthState CallFunc_GetGrowthState_ReturnValue, FName CallFunc_GetPlantID_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, ESlateVisibility K2Node_Select_Default_1, ESlateVisibility K2Node_Select_Default_2);
    void Construct();
    void Destruct();
    void RefreshForHerbPlot();
    void OnFertilizerSelected(FName FertilizerID);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BeginInputTimeout(float TimeoutTime);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnOutroEnded(int32_t OutroType);
    void OnIntroEnded(int32_t IntroType);
    void DisableFadingForHerbPlot();
    void RemoveNoFadeTag(AActor* Actor);
    void OnPlantSelected(FName PlantID);
    void ApplyItemsWidgetRequiresLegendUpdate();
    void BndEvt__UI_BP_HerbologyMenu_NavLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_BP_HerbologyMenu_NavRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_BP_HerbologyMenu_ApplyItemsWidget_K2Node_ComponentBoundEvent_2_OnFertilizerHovered__DelegateSignature(UUI_BP_HerbologyFertilizerButton_C* FertilizerButton);
    void ExecuteUbergraph_UI_BP_HerbologyMenu(int32_t EntryPoint);
}; // Size: 0x500
#pragma pack(pop)
