#pragma once
#include <cstdint>
#include "EHorizontalAlignment.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UImage;
class UScaleBoxSlot;
#pragma pack(push, 1)
class UUI_BP_SliderDot_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UImage* sliderOutlineMiddle; // 0x270
    EHorizontalAlignment Dot_Horizontal_Alignment; // 0x278
    char pad_279[0x7];
    static UUI_BP_SliderDot_C* StaticClass();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void ExecuteUbergraph_UI_BP_SliderDot(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, UScaleBoxSlot* CallFunc_SlotAsScaleBoxSlot_ReturnValue);
}; // Size: 0x280
#pragma pack(pop)
