#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UHUDElementGroup.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UUMGSequencePlayer;
class UPhoenixRichTextBlock;
class UImage;
class UPhoenixImage;
class UObject;
#pragma pack(push, 1)
class UUI_BP_CombatBreakout_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* BreakoutNotify; // 0x2f0
    UWidgetAnimation* BreakoutRingSuccess; // 0x2f8
    UWidgetAnimation* BreakoutRingFail; // 0x300
    UWidgetAnimation* SwapBreakoutButton; // 0x308
    UPhoenixRichTextBlock* BreakoutButton; // 0x310
    UImage* BreakoutButtonFrame; // 0x318
    UImage* BreakoutColorMask; // 0x320
    UImage* BreakoutGlow; // 0x328
    UCanvasPanel* BreakoutGroup; // 0x330
    UImage* BreakoutRing; // 0x338
    UPhoenixImage* ButtonFlame; // 0x340
    bool RandomBreakout; // 0x348
    bool BreakoutComplete; // 0x349
    bool BreakoutInputPressed; // 0x34a
    char pad_34b[0x5];
    static UUI_BP_CombatBreakout_C* StaticClass();
    void BreakoutTimeout(UObject* Caller);
    void BreakoutIconRamdomizer(FString Button, bool IsRandom, FString Temp_string_Variable, FString Temp_string_Variable_1, FString Temp_string_Variable_2, FString Temp_string_Variable_3, int32_t Temp_int_Variable, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32_t CallFunc_RandomInteger_ReturnValue, FString K2Node_Select_Default);
    void Breakout_State_Change(bool changed, FString ButtonStr, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void Breakout_Success(UObject* Caller, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Breakout_Failure(UObject* Caller, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Construct();
    void AnimationComplete();
    void ExecuteUbergraph_UI_BP_CombatBreakout(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}; // Size: 0x350
#pragma pack(pop)
