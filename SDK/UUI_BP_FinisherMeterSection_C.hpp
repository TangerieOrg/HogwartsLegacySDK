#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UBorder;
class UProgressBar;
class UPhoenixImage;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UUI_BP_FinisherMeterSection_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* CooldownGlint; // 0x270
    UWidgetAnimation* CooldownFlourish; // 0x278
    UWidgetAnimation* FocusGainedAnim; // 0x280
    UWidgetAnimation* MeterFullAnim; // 0x288
    UImage* BarFillGlint; // 0x290
    UBorder* flameBorder; // 0x298
    UBorder* flameBorder_1; // 0x2a0
    UProgressBar* Meter; // 0x2a8
    UPhoenixImage* meterFresnel; // 0x2b0
    UImage* meterOutlineLeft; // 0x2b8
    UImage* meterOutlineMiddle; // 0x2c0
    UImage* meterOutlineRight; // 0x2c8
    UImage* sparkles; // 0x2d0
    bool canShowGlow; // 0x2d8
    char pad_2d9[0x27];
    int32_t meterPositionIndex; // 0x300
    char pad_304[0x4];
    static UUI_BP_FinisherMeterSection_C* StaticClass();
    void Set_Meter_Glint(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
    void SetMeterPosition(int32_t Index, int32_t Temp_int_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, int32_t Temp_int_Variable_1, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, int32_t Temp_int_Variable_2, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility Temp_byte_Variable_8, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, ESlateVisibility K2Node_Select_Default_2);
    void SetMeterPercent(float NewPercent, float OldPercent, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void ExecuteUbergraph_UI_BP_FinisherMeterSection(int32_t EntryPoint, bool K2Node_Event_IsDesignTime);
    void MeterIsNotFull__DelegateSignature();
    void MeterIsFull__DelegateSignature();
}; // Size: 0x308
#pragma pack(pop)
