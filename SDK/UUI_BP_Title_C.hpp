#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UUserWidget.hpp"
class UTexture2D;
class UCanvasPanelSlot;
class UOverlay;
class UWidgetAnimation;
class UObject;
class UImage;
class UUI_BP_SparkleBurst_C;
class UPhoenixImage;
class UMaterialInstanceDynamic;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_Title_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* StartFadeIn_Title; // 0x270
    UWidgetAnimation* StartFadeIn; // 0x278
    UWidgetAnimation* StartFadeOut; // 0x280
    UUI_BP_SparkleBurst_C* burst1; // 0x288
    UUI_BP_SparkleBurst_C* burst2; // 0x290
    UUI_BP_SparkleBurst_C* burst3; // 0x298
    UUI_BP_SparkleBurst_C* burst4; // 0x2a0
    UUI_BP_SparkleBurst_C* burst5; // 0x2a8
    UPhoenixImage* mainGodray1; // 0x2b0
    UOverlay* Overlay_Bloom; // 0x2b8
    UPhoenixImage* PhoenixImage_FrontSparkels; // 0x2c0
    UImage* TitleLogo; // 0x2c8
    bool sparkles; // 0x2d0
    char pad_2d1[0x17];
    bool LogoLoaded; // 0x2e8
    bool GlowLoaded; // 0x2e9
    bool ShowIsPending; // 0x2ea
    char pad_2eb[0x5];
    UWidgetAnimation* PendingAnim; // 0x2f0
    char pad_2f8[0x10];
    static UUI_BP_Title_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_Title_5();
    void SequenceEvent__ENTRYPOINTUI_BP_Title_4();
    void SequenceEvent__ENTRYPOINTUI_BP_Title_3();
    void SequenceEvent__ENTRYPOINTUI_BP_Title_2();
    void SequenceEvent__ENTRYPOINTUI_BP_Title_1();
    void SequenceEvent__ENTRYPOINTUI_BP_Title_0();
    void SetGlarePos(FVector2D InPosition, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
    void SetHogwartsLogoLocale(FString tempGlows, FString tempLogo);
    void PlayBurst1();
    void PlayBurst2();
    void PlayBurst3();
    void PlayBurst4();
    void PlayBurst5();
    void ReadyForPressStartReveal();
    void OnHogwartsLogoLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void OnHogwartsLogoGlowsLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void PreConstruct0(bool IsDesignTime);
    void ShowMainTitle();
    void HideMainTitle();
    void ShowMainTitleIntro();
    void Construct0();
    void ExecuteUbergraph_UI_BP_Title(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UTexture2D* K2Node_CustomEvent_LoadedTexture_1, UObject* K2Node_CustomEvent_CallbackParam_1, UTexture2D* K2Node_CustomEvent_LoadedTexture, UObject* K2Node_CustomEvent_CallbackParam, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3);
    void LogoAnimationIsFinished__DelegateSignature();
    void LogoIsReady__DelegateSignature();
}; // Size: 0x308
#pragma pack(pop)
