#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "EUMGInputAction.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UEULAPageWidget.hpp"
class UWidgetAnimation;
class UUI_BP_Legend_Horizontal_Screen_C;
class UUI_BP_HYDRATextButton_C;
class UPhoenixGameInstance;
class UPhoenixRichTextBlock;
class UPhoenixTextBlock;
class UUI_BP_SimpleScrollBox_C;
class UUIManager;
class UObject;
#pragma pack(push, 1)
class UUI_BP_EULA_C : public UEULAPageWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* FadeOut; // 0x330
    UUI_BP_HYDRATextButton_C* accept; // 0x338
    UPhoenixRichTextBlock* AcceptText; // 0x340
    UPhoenixTextBlock* BuildVersion; // 0x348
    UUI_BP_SimpleScrollBox_C* EULAscrollBox; // 0x350
    UPhoenixTextBlock* Hydra_ID; // 0x358
    UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x360
    UPhoenixRichTextBlock* mainBodyText; // 0x368
    UUI_BP_HYDRATextButton_C* PrivacyPolicy; // 0x370
    UPhoenixTextBlock* ProfileName; // 0x378
    UUI_BP_HYDRATextButton_C* ReadEULA; // 0x380
    UUI_BP_HYDRATextButton_C* termsOfService; // 0x388
    float ScrollBuffer; // 0x390
    char pad_394[0x4];
    FString ppLink; // 0x398
    FString tosLink; // 0x3a8
    bool AcceptedEULA; // 0x3b8
    bool StandAloneMode; // 0x3b9
    char pad_3ba[0x16];
    bool IsOnScreen; // 0x3d0
    char pad_3d1[0x7];
    FString tosPlatform; // 0x3d8
    static UUI_BP_EULA_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2);
    void PrivacyClicked();
    void TOSClicked();
    void AcceptClicked(UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue);
    void ReadEULAClicked();
    void UpdateButtonTexts(EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, int32_t CallFunc_PostEventAtLocation_ReturnValue_3, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_IsMenuReaderEnabled_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5);
    void SetIsOnScreen();
    void BndEvt__accept_K2Node_ComponentBoundEvent_0_HYDRATextButtonClicked__DelegateSignature(UUI_BP_HYDRATextButton_C* Button);
    void BndEvt__termsOfService_K2Node_ComponentBoundEvent_1_HYDRATextButtonClicked__DelegateSignature(UUI_BP_HYDRATextButton_C* Button);
    void BndEvt__privacyPolicy_K2Node_ComponentBoundEvent_2_HYDRATextButtonClicked__DelegateSignature(UUI_BP_HYDRATextButton_C* Button);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnOutroEnded(int32_t OutroType);
    void Construct();
    void EULALoaded(UObject* Caller);
    void RefreshButtonCallouts(UObject* Caller);
    void BndEvt__UI_BP_EULA_accept_K2Node_ComponentBoundEvent_3_HYDRATextButtonHovered__DelegateSignature(UUI_BP_HYDRATextButton_C* Button);
    void BndEvt__UI_BP_EULA_termsOfService_K2Node_ComponentBoundEvent_4_HYDRATextButtonHovered__DelegateSignature(UUI_BP_HYDRATextButton_C* Button);
    void BndEvt__UI_BP_EULA_privacyPolicy_K2Node_ComponentBoundEvent_5_HYDRATextButtonHovered__DelegateSignature(UUI_BP_HYDRATextButton_C* Button);
    void BlueprintFocusAcquired();
    void BndEvt__UI_BP_EULA_ReadEULA_K2Node_ComponentBoundEvent_6_HYDRATextButtonClicked__DelegateSignature(UUI_BP_HYDRATextButton_C* Button);
    void BndEvt__UI_BP_EULA_ReadEULA_K2Node_ComponentBoundEvent_7_HYDRATextButtonHovered__DelegateSignature(UUI_BP_HYDRATextButton_C* Button);
    void ExternalConfigUpdated(UObject* Caller);
    void RefreshReadEulaButton();
    void UserProfileChange(UObject* Caller, FString String);
    void ExecuteUbergraph_UI_BP_EULA(int32_t EntryPoint);
    void EulaAccepted__DelegateSignature();
}; // Size: 0x3e8
#pragma pack(pop)
