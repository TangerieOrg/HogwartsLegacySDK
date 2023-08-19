#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UScreenFadeWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
#pragma pack(push, 1)
class UUI_BP_ScreenFade_C : public UScreenFadeWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
    UWidgetAnimation* FadeAnim; // 0x2d8
    UImage* Image_0; // 0x2e0
    FLinearColor TargetColor; // 0x2e8
    static UUI_BP_ScreenFade_C* StaticClass();
    float UI_GetCurrentFade0();
    void CheckFadeFinished();
    void FadeOut(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void FadeIn(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Construct();
    void Destruct();
    void UI_FadeOut0();
    void UI_FadeIn0();
    void WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_1();
    void UI_SetManualFade0(float Opacity);
    void SetFadeColor0(FLinearColor TargetColor);
    void ExecuteUbergraph_UI_BP_ScreenFade(int32_t EntryPoint, float K2Node_Event_Opacity, FLinearColor K2Node_Event_TargetColor, FLinearColor K2Node_MakeStruct_LinearColor);
}; // Size: 0x2f8
#pragma pack(pop)
