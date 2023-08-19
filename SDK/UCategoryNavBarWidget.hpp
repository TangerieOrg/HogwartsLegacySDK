#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UImage;
class UIconButtonWidget;
#pragma pack(push, 1)
class UCategoryNavBarWidget : public UUserWidget {
public:
    TArray<void*> CategoryNames; // 0x268
    int32_t CurCategoryIndex; // 0x278
    char pad_27c[0x4];
    UImage* BackgroundImage; // 0x280
    static UCategoryNavBarWidget* StaticClass();
    void PrevCategory();
    void OnUnhover(UIconButtonWidget* hoveredButton);
    void OnHover(UIconButtonWidget* hoveredButton);
    void OnClick(int32_t SelectedCategory);
    void OnCategoryButtonUnHover(UIconButtonWidget* Button);
    void OnCategoryButtonHover(UIconButtonWidget* Button);
    void OnCategoryButtonClicked(UIconButtonWidget* Button);
    void NextCategory();
    void InitializeButton(UIconButtonWidget* Button);
    int32_t GetIndexOfButton(UIconButtonWidget* Button);
    void GetCurrentCategory();
    UIconButtonWidget* GetButtonByIndex(int32_t Index);
    void AddCategory();
}; // Size: 0x288
#pragma pack(pop)
