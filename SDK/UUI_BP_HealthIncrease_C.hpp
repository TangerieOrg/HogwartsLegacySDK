#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UBorder;
class UPhoenixTextBlock;
class UHorizontalBox;
#pragma pack(push, 1)
class UUI_BP_HealthIncrease_C : public UUserWidget {
public:
    UWidgetAnimation* ShowText; // 0x268
    UWidgetAnimation* PlusUp; // 0x270
    UBorder* gainTextBorder; // 0x278
    UPhoenixTextBlock* HealthGain; // 0x280
    UHorizontalBox* HealthGainBox; // 0x288
    static UUI_BP_HealthIncrease_C* StaticClass();
    void HealthUpNoAnim(int32_t Health);
    void HealthUp(int32_t Health);
}; // Size: 0x290
#pragma pack(pop)
