#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UPhoenixTextBlock;
class UImage;
#pragma pack(push, 1)
class UUI_BP_DamageIndicator_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* Damage; // 0x270
    UPhoenixTextBlock* Number; // 0x278
    UPhoenixTextBlock* Number_Stun; // 0x280
    UImage* NumberRays; // 0x288
    static UUI_BP_DamageIndicator_C* StaticClass();
    void SetAmount(int32_t Amount, bool IsVulnerableDamage, FLinearColor DamageColor, int32_t CallFunc_Abs_Int_ReturnValue);
    void WidgetAnimationEvt_Damage_K2Node_WidgetAnimationEvent_0();
    void ExecuteUbergraph_UI_BP_DamageIndicator(int32_t EntryPoint);
}; // Size: 0x290
#pragma pack(pop)
