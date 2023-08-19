#pragma once
#include <cstdint>
#include "FSlateColor.hpp"
#include "UUserWidget.hpp"
class UCheckBox;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UCheckboxWidget : public UUserWidget {
public:
    bool PreTranslateText; // 0x268
    bool IsChecked; // 0x269
    char pad_26a[0x1e];
    FSlateColor CompletedColor; // 0x288
    FSlateColor CurrentColor; // 0x2b0
    FSlateColor FutureColor; // 0x2d8
    UCheckBox* TheCheckbox; // 0x300
    UPhoenixTextBlock* CheckboxTextBlock; // 0x308
    char pad_310[0x10];
    static UCheckboxWidget* StaticClass();
    void StateChanged(bool State);
    void SetProperties();
    void SetCheckboxOnOff();
    void OnSynchronizeProperties();
}; // Size: 0x320
#pragma pack(pop)
