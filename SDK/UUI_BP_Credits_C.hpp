#pragma once
#include <cstdint>
#include "ECreditEntryType.hpp"
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FCreditEntry.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimespan.hpp"
#include "UPhoenixCreditsScreen.hpp"
class UClass;
class UCanvasPanel;
class UWidgetAnimation;
class UImage;
class APlayerController;
class UUI_BP_LegendItem_C;
class UBinkMediaPlayer;
class UFileMediaSource;
class UUserWidget;
class UPhoenixCreditEntryWidget;
class ULegendItem;
#pragma pack(push, 1)
class UUI_BP_Credits_C : public UPhoenixCreditsScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3e0
    UWidgetAnimation* HideSkipPromptAnim; // 0x3e8
    UWidgetAnimation* ShowSkipPromptAnim; // 0x3f0
    UWidgetAnimation* Intro; // 0x3f8
    UImage* BackgroundVideo; // 0x400
    UUI_BP_LegendItem_C* SkipLegendItem; // 0x408
    UCanvasPanel* TopCanvasPanel; // 0x410
    bool IsEndGame; // 0x418
    bool SkipPromptVisible; // 0x419
    char pad_41a[0x16];
    UBinkMediaPlayer* MediaPlayer; // 0x430
    UFileMediaSource* MediaSource; // 0x438
    static UUI_BP_Credits_C* StaticClass();
    UPhoenixCreditEntryWidget* CreateCreditEntry0(FCreditEntry CreditEntry, ECreditEntryType Temp_byte_Variable, UClass* Temp_class_Variable, UClass* Temp_class_Variable_1, UClass* Temp_class_Variable_2, UClass* Temp_class_Variable_3, UClass* Temp_class_Variable_4, UClass* Temp_class_Variable_5, UClass* Temp_class_Variable_6, UClass* Temp_class_Variable_7, APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, UClass* K2Node_Select_Default, UUserWidget* CallFunc_Create_ReturnValue, UPhoenixCreditEntryWidget* K2Node_DynamicCast_AsPhoenix_Credit_Entry_Widget, bool K2Node_DynamicCast_bSuccess);
    void StopBackgroundBink();
    void PlayBackgroundBink(bool CallFunc_Play_ReturnValue);
    void OpenBackgroundBink(FTimespan CallFunc_MakeTimespan_ReturnValue, bool CallFunc_Seek_ReturnValue, FString CallFunc_GetUrl_ReturnValue, bool CallFunc_SetLooping_ReturnValue, FString CallFunc_Replace_ReturnValue, bool CallFunc_OpenUrl_ReturnValue);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5);
    void Complete_64AC697A4153810645293EB464E62412();
    void CurtainRaised_831EC33243A07371A780879EE1AAC9C0();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnOutroEnded(int32_t OutroType);
    void ShowSkipPrompt();
    void Construct();
    void Destruct();
    void CreditsMovieEnded();
    void SkipReleased(ULegendItem* LegendItem, bool HoldWasCompleted);
    void OnMediaOpened(FString OpenedUrl);
    void ExecuteUbergraph_UI_BP_Credits(int32_t EntryPoint);
    void CreditsEnded__DelegateSignature();
}; // Size: 0x440
#pragma pack(pop)
