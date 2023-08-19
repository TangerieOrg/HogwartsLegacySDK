#pragma once
#include <cstdint>
#include "ECheckBoxState.hpp"
#include "EHorizontalAlignment.hpp"
#include "FAkBoolPropertyToControl.hpp"
#include "FAkWwiseItemToControl.hpp"
#include "FCheckBoxStyle.hpp"
#include "FGuid.hpp"
#include "UContentWidget.hpp"
#pragma pack(push, 1)
class UAkCheckBox : public UContentWidget {
public:
    char pad_120[0x340];
    ECheckBoxState CheckedState; // 0x460
    char pad_461[0x17];
    FCheckBoxStyle WidgetStyle; // 0x478
    EHorizontalAlignment HorizontalAlignment; // 0x9f8
    bool IsFocusable; // 0x9f9
    char pad_9fa[0x6];
    FAkBoolPropertyToControl ThePropertyToControl; // 0xa00
    FAkWwiseItemToControl ItemToControl; // 0xa10
    char pad_a50[0x80];
    static UAkCheckBox* StaticClass();
    void SetIsChecked(bool InIsChecked);
    void SetCheckedState(ECheckBoxState InCheckedState);
    void SetAkItemId(FGuid& ItemId);
    void SetAkBoolProperty(FString ItemProperty);
    bool IsPressed();
    bool IsChecked();
    ECheckBoxState GetCheckedState();
    FString GetAkProperty();
    FGuid GetAkItemId();
}; // Size: 0xad0
#pragma pack(pop)
