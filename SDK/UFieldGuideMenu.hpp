#pragma once
#include <cstdint>
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "UScreen.hpp"
#pragma pack(push, 1)
class UFieldGuideMenu : public UScreen {
public:
    bool NeedsAutosave; // 0x370
    char pad_371[0x7];
    static UFieldGuideMenu* StaticClass();
    void UpdateMenuLegend(TArray<FLegendItemData>& NewData);
    void MenuReadLegend();
    void MarkNeedsAutosave();
    void ChangeMenuPage(EUMGInputAction MenuPage);
}; // Size: 0x378
#pragma pack(pop)
