#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UProgressBar;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UUI_BP_BroomBoostSection_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* ShowBoosting; // 0x270
    UWidgetAnimation* meterPulse; // 0x278
    UWidgetAnimation* HideBoostAnim; // 0x280
    UWidgetAnimation* CloseToGroundAnim; // 0x288
    UWidgetAnimation* BoostingAnim; // 0x290
    UImage* BarFillGlint; // 0x298
    UProgressBar* Meter; // 0x2a0
    UImage* pulseFresnel; // 0x2a8
    UImage* sparkles; // 0x2b0
    bool IsMeterFull; // 0x2b8
    char pad_2b9[0x27];
    int32_t meterPositionIndex; // 0x2e0
    int32_t maxPositionIndex; // 0x2e4
    bool BoostEffectActive; // 0x2e8
    bool CloseToGroundEffectActive; // 0x2e9
    char pad_2ea[0x6];
    static UUI_BP_BroomBoostSection_C* StaticClass();
    void ToggleBoostingEffect(bool ShouldShow, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2);
    void ToggleCloseToGroundEffect(bool ShouldShow, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
    void SetMeterFillColor(FLinearColor NewColor);
    void SetMeterPosition(int32_t Index, int32_t MaxIndex);
    void SetMeterPercent(float NewPercent, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_BroomBoostSection(int32_t EntryPoint, bool K2Node_Event_IsDesignTime);
    void MeterIsNotFull__DelegateSignature();
    void MeterIsFull__DelegateSignature();
}; // Size: 0x2f0
#pragma pack(pop)
