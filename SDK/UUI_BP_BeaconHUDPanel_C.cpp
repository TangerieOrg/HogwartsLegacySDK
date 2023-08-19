#include "UCanvasPanel.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UFunction.hpp"
#include "UHUDCompassIcon.hpp"
#include "UHUDElementGroup.hpp"
#include "UUI_BP_BeaconHUDPanel_C.hpp"
UUI_BP_BeaconHUDPanel_C* UUI_BP_BeaconHUDPanel_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Beacons/UI_BP_BeaconHUDPanel.UI_BP_BeaconHUDPanel_C");
    return (UUI_BP_BeaconHUDPanel_C*)res;
}
void UUI_BP_BeaconHUDPanel_C::AddBeacon(UHUDCompassIcon* HUDCompassIcon, UCanvasPanelSlot*& NewSlot, UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Beacons/UI_BP_BeaconHUDPanel.UI_BP_BeaconHUDPanel_C.AddBeacon"));
    struct Params_AddBeacon {
        UHUDCompassIcon* HUDCompassIcon; // 0x0
        UCanvasPanelSlot* NewSlot; // 0x8
        UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddBeacon params{};
    params.HUDCompassIcon = (UHUDCompassIcon*)HUDCompassIcon;
    params.NewSlot = (UCanvasPanelSlot*)NewSlot;
    params.CallFunc_AddChildToCanvas_ReturnValue = (UCanvasPanelSlot*)CallFunc_AddChildToCanvas_ReturnValue;
    ProcessEvent(func, &params);
    NewSlot = params.NewSlot;
}
void UUI_BP_BeaconHUDPanel_C::RemoveBeacon(UHUDCompassIcon* Beacon, bool CallFunc_RemoveChild_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Beacons/UI_BP_BeaconHUDPanel.UI_BP_BeaconHUDPanel_C.RemoveBeacon"));
    struct Params_RemoveBeacon {
        UHUDCompassIcon* Beacon; // 0x0
        bool CallFunc_RemoveChild_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveBeacon params{};
    params.Beacon = (UHUDCompassIcon*)Beacon;
    params.CallFunc_RemoveChild_ReturnValue = (bool)CallFunc_RemoveChild_ReturnValue;
    ProcessEvent(func, &params);
}
