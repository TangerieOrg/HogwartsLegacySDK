#pragma once
#include <cstdint>
#include "EMenuPlacement.hpp"
#include "FVector2D.hpp"
#include "UContentWidget.hpp"
class UClass;
class UUserWidget;
#pragma pack(push, 1)
class UMenuAnchor : public UContentWidget {
public:
    UClass* MenuClass; // 0x120
    char pad_128[0x20];
    EMenuPlacement Placement; // 0x148
    bool bFitInWindow; // 0x149
    bool ShouldDeferPaintingAfterWindowContent; // 0x14a
    bool UseApplicationMenuStack; // 0x14b
    char pad_14c[0x24];
    static UMenuAnchor* StaticClass();
    void ToggleOpen(bool bFocusOnOpen);
    bool ShouldOpenDueToClick();
    void SetPlacement(EMenuPlacement InPlacement);
    void Open(bool bFocusMenu);
    bool IsOpen();
    bool HasOpenSubMenus();
    UUserWidget* GetUserWidget__DelegateSignature();
    FVector2D GetMenuPosition();
    void FitInWindow(bool bFit);
    void Close();
}; // Size: 0x170
#pragma pack(pop)
