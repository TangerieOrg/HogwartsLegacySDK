#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "UIHUDGroups.hpp"
#include "UUserWidget.hpp"
class UObject;
#pragma pack(push, 1)
class UHUDElementGroup : public UUserWidget {
public:
    UIHUDGroups MyGroup; // 0x268
    ESlateVisibility DesiredHiddenState; // 0x269
    char pad_26a[0x7e];
    static UHUDElementGroup* StaticClass();
    void ShowHUDElement(UObject* Provider);
    void HideHUDElement(UObject* Provider);
    bool GetShouldBeHidden();
}; // Size: 0x2e8
#pragma pack(pop)
