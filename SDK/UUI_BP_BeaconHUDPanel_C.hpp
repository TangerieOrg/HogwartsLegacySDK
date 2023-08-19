#pragma once
#include <cstdint>
#include "UHUDElementGroup.hpp"
class UCanvasPanel;
class UHUDCompassIcon;
class UCanvasPanelSlot;
#pragma pack(push, 1)
class UUI_BP_BeaconHUDPanel_C : public UHUDElementGroup {
public:
    UCanvasPanel* Root; // 0x2e8
    static UUI_BP_BeaconHUDPanel_C* StaticClass();
    void AddBeacon(UHUDCompassIcon* HUDCompassIcon, UCanvasPanelSlot*& NewSlot, UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue);
    void RemoveBeacon(UHUDCompassIcon* Beacon, bool CallFunc_RemoveChild_ReturnValue);
}; // Size: 0x2f0
#pragma pack(pop)
