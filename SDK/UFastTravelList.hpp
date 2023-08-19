#pragma once
#include <cstdint>
#include "UPhoenixUserWidget.hpp"
#pragma pack(push, 1)
class UFastTravelList : public UPhoenixUserWidget {
public:
    char pad_328[0x8];
    static UFastTravelList* StaticClass();
    void ShowEvent();
    void Show();
    void SetListTitle(FString Title);
    bool IsListVisible();
    void HighlightListMenuItem(FString ItemName, bool bCallUnHovered);
    void HideEvent();
    void Hide();
    void EnableItem(FString ItemName);
    void DisableItem(FString ItemName);
    void ClearListMenuItems();
    void ClearHighlightListMenuItem(bool bCallUnHovered);
    void ClearAllHighlightedListMenuItems();
    void AddListMenuItem(FString ItemName);
    void AddList(TArray<FString>& ItemList);
}; // Size: 0x330
#pragma pack(pop)
