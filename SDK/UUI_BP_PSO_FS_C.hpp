#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UPhoenixUserWidget.hpp"
class UCanvasPanelSlot;
class UUI_BP_FullBackgroundSmoke_C;
class UOverlay;
class UWidgetAnimation;
class UPhoenixTextBlock;
class UImage;
class UObject;
class UProgressBar;
class UUI_BP_Legend_Horizontal_Screen_C;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_PSO_FS_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* FrontendFadeOut; // 0x330
    UOverlay* backgroundOverlay; // 0x338
    UImage* BlackFadeImage; // 0x340
    UProgressBar* CompileProgressBar; // 0x348
    UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x350
    UPhoenixTextBlock* PSODesc; // 0x358
    UPhoenixTextBlock* PSOTitle; // 0x360
    UUI_BP_FullBackgroundSmoke_C* UI_BP_FullBackgroundSmoke; // 0x368
    char pad_370[0x10];
    bool MinDurationComplete; // 0x380
    bool CompileComplete; // 0x381
    bool MaxDurationExceeded; // 0x382
    char pad_383[0x1];
    float MinScreenDuration; // 0x384
    float MaxScreenDuration; // 0x388
    bool ExitRequested; // 0x38c
    bool IsFrontend; // 0x38d
    bool IsPrecompilationPaused; // 0x38e
    char pad_38f[0x1];
    static UUI_BP_PSO_FS_C* StaticClass();
    void AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, float K2Node_MathExpression_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void RequestExit(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    void PSOUpdate(float Progress);
    void OnMinDurationCompleted();
    void EmergencyTimeout();
    void StartListening();
    void Construct();
    void WidgetAnimationEvt_FrontendFadeOut_K2Node_WidgetAnimationEvent_0();
    void ResolutionSettingsApplied(UObject* Caller);
    void Destruct();
    void ExecuteUbergraph_UI_BP_PSO_FS(int32_t EntryPoint);
    void PSOComplete__DelegateSignature();
}; // Size: 0x390
#pragma pack(pop)
