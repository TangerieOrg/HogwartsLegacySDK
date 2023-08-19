#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FIntPoint.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UI_BP_BackgroundSmoke_Enum\Type.hpp"
#include "UScreen.hpp"
class UPhoenixImage;
class UGameUserSettings;
#pragma pack(push, 1)
class UUI_BP_LoadingBackgroundFX_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UPhoenixImage* PhoenixImage_BackSmokePlate; // 0x378
    UPhoenixImage* PhoenixImage_FrontGlow; // 0x380
    char pad_388[0x70];
    float MatRef_BorderGlow; // 0x3f8
    float MatRef_FillGlow; // 0x3fc
    float MatRef_MoveY; // 0x400
    float MatRef_Rotate; // 0x404
    float MatRef_MaskLerpAlpha; // 0x408
    float MatRef_Move; // 0x40c
    float MatRef_Move2; // 0x410
    UI_BP_BackgroundSmoke_Enum::Type BackSmokeType; // 0x414
    char pad_415[0x3];
    float MaterialOpacity; // 0x418
    float GlowOpacity; // 0x41c
    static UUI_BP_LoadingBackgroundFX_C* StaticClass();
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t NewQuantity);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnOutroEnded(int32_t OutroType);
    void OnIntroEnded(int32_t IntroType);
    void PreConstruct(bool IsDesignTime);
    void Destruct();
    void Construct();
    void SequenceEvent_1();
    void ExecuteUbergraph_UI_BP_LoadingBackgroundFX(int32_t EntryPoint, int32_t K2Node_Event_IntroType_1, float K2Node_Event_IntroDuration, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, int32_t K2Node_Event_OutroType, int32_t K2Node_Event_IntroType, bool K2Node_Event_IsDesignTime, UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, FIntPoint CallFunc_GetScreenResolution_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue);
    void OnItemPurchaseFailedNoSpace__DelegateSignature();
    void OnItemPurchaseFailedNoMoney__DelegateSignature();
    void OnItemSold__DelegateSignature();
    void OnItemPurchased__DelegateSignature();
    void LeavePreview__DelegateSignature(FString PreviewedGearID);
    void StartPreview__DelegateSignature(FString PreviewedGearID);
    void AbortInteraction__DelegateSignature();
}; // Size: 0x420
#pragma pack(pop)
