#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UComboHUD_Base.hpp"
class UWidgetAnimation;
class UPhoenixTextBlock;
class AActor;
class ABiped_Player;
class UObject;
#pragma pack(push, 1)
class UUI_BP_ComboHUD_C : public UComboHUD_Base {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* AddPoints; // 0x2f0
    UPhoenixTextBlock* FocusText; // 0x2f8
    UPhoenixTextBlock* NewPoints; // 0x300
    float ComboTimeLeft; // 0x308
    char pad_30c[0x4];
    static UUI_BP_ComboHUD_C* StaticClass();
    void OnFocusChanged(AActor* Target, float InFocusChange);
    void UpdateFocusMultiplier(int32_t Points, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, float CallFunc_GetComboPoints_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue);
    void VisibilityChanged(ESlateVisibility NewVisibility, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void UpdateComboCount(UObject* Caller, int32_t int);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_BP_ComboHUD(int32_t EntryPoint, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
}; // Size: 0x310
#pragma pack(pop)
