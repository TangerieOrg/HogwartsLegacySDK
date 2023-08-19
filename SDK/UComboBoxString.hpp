#pragma once
#include <cstdint>
#include "ESelectInfo\Type.hpp"
#include "FComboBoxStyle.hpp"
#include "FMargin.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FTableRowStyle.hpp"
#include "UWidget.hpp"
#pragma pack(push, 1)
class UComboBoxString : public UWidget {
public:
    TArray<FString> DefaultOptions; // 0x108
    FString SelectedOption; // 0x118
    FComboBoxStyle WidgetStyle; // 0x128
    FTableRowStyle ItemStyle; // 0x518
    FMargin ContentPadding; // 0xce0
    float MaxListHeight; // 0xcf0
    bool HasDownArrow; // 0xcf4
    bool EnableGamepadNavigationMode; // 0xcf5
    char pad_cf6[0x2];
    FSlateFontInfo Font; // 0xcf8
    FSlateColor ForegroundColor; // 0xd50
    bool bIsFocusable; // 0xd78
    char pad_d79[0x87];
    static UComboBoxString* StaticClass();
    void SetSelectedOption(FString Option);
    void SetSelectedIndex(int32_t Index);
    bool RemoveOption(FString Option);
    void RefreshOptions();
    void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, ESelectInfo::Type SelectionType);
    void OnOpeningEvent__DelegateSignature();
    bool IsOpen();
    FString GetSelectedOption();
    int32_t GetSelectedIndex();
    int32_t GetOptionCount();
    FString GetOptionAtIndex(int32_t Index);
    int32_t FindOptionIndex(FString Option);
    void ClearSelection();
    void ClearOptions();
    void AddOption(FString Option);
}; // Size: 0xe00
#pragma pack(pop)
