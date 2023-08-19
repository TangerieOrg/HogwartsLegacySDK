#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UI_BP_BackgroundSmoke_Enum\Type.hpp"
#include "UScreen.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixImage;
class URetainerBox;
class UObject;
#pragma pack(push, 1)
class UUI_BP_BackgroundSmoke_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UWidgetAnimation* Fluid_Vortex_switch; // 0x378
    UWidgetAnimation* Fadeout_SmokeDesolve_Vortex; // 0x380
    UWidgetAnimation* FadeIn_SmokeFluid_Vortex; // 0x388
    UWidgetAnimation* FadeIn_SmokeFluid_RB; // 0x390
    UPhoenixImage* PhoenixImage_BackSmokePlate; // 0x398
    UPhoenixImage* PhoenixImage_BackVortexPool; // 0x3a0
    UPhoenixImage* PhoenixImage_StarBrust; // 0x3a8
    URetainerBox* RetainerBox_BackSmoke; // 0x3b0
    char pad_3b8[0x70];
    float MatRef_BorderGlow; // 0x428
    float MatRef_FillGlow; // 0x42c
    float MatRef_MoveY; // 0x430
    float MatRef_Rotate; // 0x434
    float MatRef_MaskLerpAlpha; // 0x438
    float MatRef_Move; // 0x43c
    float MatRef_Move2; // 0x440
    bool HaveStarBrust; // 0x444
    UI_BP_BackgroundSmoke_Enum::Type BackSmokeType; // 0x445
    char pad_446[0x2];
    static UUI_BP_BackgroundSmoke_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_3();
    void SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_2();
    void SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_1();
    void SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_0();
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t NewQuantity);
    void Finished_A0718D5D4425C53BA4252CA49D170DAC();
    void Finished_7E5D6D1D4577374A1CD1A781D1E39F3B();
    void SequenceEvent_1();
    void Construct();
    void Destruct();
    void PreConstruct(bool IsDesignTime);
    void SequenceEvent_SmokeFadeIn();
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnOutroEnded(int32_t OutroType);
    void OnIntroEnded(int32_t IntroType);
    void IntroAnim_SmokeFluid();
    void OutroAnim_SmokeDesolve();
    void IntroAnim_SmokeFluidVortex(float PlaybackSpeed, float StartAtTime, float VortexOpacity);
    void OutroAnim_SmokeFluid();
    void SwitchAnim();
    void ExecuteUbergraph_UI_BP_BackgroundSmoke(int32_t EntryPoint, bool Temp_bool_Variable, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UI_BP_BackgroundSmoke_Enum::Type Temp_byte_Variable_2, UObject* Temp_object_Variable, UObject* Temp_object_Variable_1, UObject* Temp_object_Variable_2, UObject* Temp_object_Variable_3);
    void OnItemPurchaseFailedNoSpace__DelegateSignature();
    void OnItemPurchaseFailedNoMoney__DelegateSignature();
    void OnItemSold__DelegateSignature();
    void OnItemPurchased__DelegateSignature();
    void LeavePreview__DelegateSignature(FString PreviewedGearID);
    void StartPreview__DelegateSignature(FString PreviewedGearID);
    void AbortInteraction__DelegateSignature();
}; // Size: 0x448
#pragma pack(pop)
