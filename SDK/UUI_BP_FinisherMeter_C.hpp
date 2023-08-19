#pragma once
#include <cstdint>
#include "FFormatArgumentData.hpp"
#include "FIntPoint.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UHUDElementGroup.hpp"
class UUMGSequencePlayer;
class UWidgetAnimation;
class UHorizontalBox;
class UPhoenixTextBlock;
class UUI_BP_FinisherMeterSection_C;
class UImage;
class AActor;
class ABiped_Player;
class UWidget;
class UObject;
#pragma pack(push, 1)
class UUI_BP_FinisherMeter_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* ComboX10; // 0x2f0
    UWidgetAnimation* CooldownPickupFlourish; // 0x2f8
    UWidgetAnimation* ComboCountFadeOut; // 0x300
    UWidgetAnimation* ComboFlamesFade; // 0x308
    UWidgetAnimation* ComboCountIncreased; // 0x310
    UPhoenixTextBlock* ComboCount; // 0x318
    UPhoenixTextBlock* ComboText; // 0x320
    UHorizontalBox* meterBox; // 0x328
    UUI_BP_FinisherMeterSection_C* section1; // 0x330
    UUI_BP_FinisherMeterSection_C* section2; // 0x338
    UUI_BP_FinisherMeterSection_C* section3; // 0x340
    UUI_BP_FinisherMeterSection_C* section4; // 0x348
    UUI_BP_FinisherMeterSection_C* section5; // 0x350
    UImage* selectedFlameRight; // 0x358
    UImage* selectedFlameRight_1; // 0x360
    UImage* selectedFlameRight_2; // 0x368
    UImage* selectedFlameTop; // 0x370
    UImage* selectedFlameTop_1; // 0x378
    UImage* selectedFlameTop_2; // 0x380
    int32_t CurComboCount; // 0x388
    char pad_38c[0x54];
    FIntPoint ComboFlamesCountRange; // 0x3e0
    FLinearColor ComboFlamesColorLow; // 0x3e8
    FLinearColor ComboFlamesColorHigh; // 0x3f8
    static UUI_BP_FinisherMeter_C* StaticClass();
    void SetComboCountVisibleWithAnim(int32_t InComboCount, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, FVector CallFunc_VLerp_ReturnValue, FVector CallFunc_VLerp_ReturnValue_1, FVector2D CallFunc_Conv_VectorToVector2D_ReturnValue, FVector2D CallFunc_Conv_VectorToVector2D_ReturnValue_1, FLinearColor CallFunc_LinearColorLerpUsingHSV_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
    void ComboOver();
    void UpdateCombo(int32_t NewComboCount, int32_t NewFocusModifier, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue);
    void PlayerFocusChanged(AActor* Target, float InFocusChange, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetFocusPercent_ReturnValue, int32_t CallFunc_GetBonusAncientMagicBars_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue);
    void SetNumMeters(int32_t NumMeters, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, FString CallFunc_Concat_StrStr_ReturnValue_1);
    void SetMeterData(float MeterPercent, int32_t Temp_int_Variable, UWidget* CallFunc_GetChildAt_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue, UUI_BP_FinisherMeterSection_C* K2Node_DynamicCast_AsUI_BP_Finisher_Meter_Section, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
    void Construct();
    void UpdateAncientMagicBarCount(UObject* Caller, int32_t int);
    void UpdateComboCount(UObject* Caller, int32_t int);
    void SpellUnlocked(UObject* Caller, FString String);
    void CooldownPickupCollected(UObject* Caller);
    void ExecuteUbergraph_UI_BP_FinisherMeter(int32_t EntryPoint);
}; // Size: 0x408
#pragma pack(pop)
