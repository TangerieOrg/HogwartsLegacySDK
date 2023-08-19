#pragma once
#include <cstdint>
#include "EListItemAlignment.hpp"
#include "UListView.hpp"
#pragma pack(push, 1)
class UTileView : public UListView {
public:
    float EntryHeight; // 0x368
    float EntryWidth; // 0x36c
    EListItemAlignment TileAlignment; // 0x370
    bool bWrapHorizontalNavigation; // 0x371
    char pad_372[0x16];
    static UTileView* StaticClass();
    void SetEntryWidth(float NewWidth);
    void SetEntryHeight(float NewHeight);
    float GetEntryWidth();
    float GetEntryHeight();
}; // Size: 0x388
#pragma pack(pop)
