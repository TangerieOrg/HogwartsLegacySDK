#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UI_BP_FastTravelDirectionEnum\Type.hpp"
#include "UPhoenixUserWidget.hpp"
class UUMGSequencePlayer;
class UCanvasPanel;
class UWidgetAnimation;
class UPhoenixTextBlock;
class UHorizontalBox;
class UBorder;
class UButton;
class UImage;
class UMapSubSystem;
class UMapBase;
class UTutorialSystem;
#pragma pack(push, 1)
class UUI_BP_MapsButton_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* TutorialHighlight; // 0x330
    UWidgetAnimation* OnHoverAnimation; // 0x338
    UHorizontalBox* buttonBack; // 0x340
    UPhoenixTextBlock* ButtonName; // 0x348
    UBorder* highlightBorder; // 0x350
    UCanvasPanel* mainPanel; // 0x358
    UButton* MapButton; // 0x360
    UImage* MissionsAvailable; // 0x368
    UHorizontalBox* textBox; // 0x370
    char pad_378[0x10];
    FString MapIconID; // 0x388
    UI_BP_FastTravelDirectionEnum::Type buttonDirection; // 0x398
    bool IsLocked; // 0x399
    char pad_39a[0x26];
    static UUI_BP_MapsButton_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SetButtonDirection(float TempPivot, float TempTextTranslation, float TempBackScale, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
    void StopTutorialHighlight();
    void PlayTutorialHighlight(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_BP_MapsButton_mapButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_MapsButton(int32_t EntryPoint, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UMapBase* CallFunc_GetActiveMap_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_GetCameraLerpInProgress_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, UTutorialSystem* CallFunc_Get_ReturnValue, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue, UMapBase* CallFunc_GetActiveMap_ReturnValue_1, bool CallFunc_GetCameraLerpInProgress_ReturnValue_1, bool CallFunc_IsTutorialStepActiveByAlias_ReturnValue);
    void OnMapsButtonUnhovered__DelegateSignature();
    void OnMapsButtonHovered__DelegateSignature();
    void OnMapsButtonSelected__DelegateSignature();
}; // Size: 0x3c0
#pragma pack(pop)
