#pragma once
#include <cstdint>
#include "FLegendItemData.hpp"
#include "UScreen.hpp"
class UPageStack;
#pragma pack(push, 1)
class UInGameMenuScreen : public UScreen {
public:
    UPageStack* ThePageStack; // 0x370
    bool NeedsAutosave; // 0x378
    char pad_379[0x7];
    static UInGameMenuScreen* StaticClass();
    void SetButtonLegend(TArray<FLegendItemData>& Legend);
    void MarkNeedsAutosave();
    void ExitPauseMenu(bool SkipFade);
}; // Size: 0x380
#pragma pack(pop)
