#include "UFunction.hpp"
#include "UOverlay.hpp"
#include "UOverlaySlot.hpp"
#include "UPanelWidget.hpp"
#include "UWidget.hpp"
UOverlay* UOverlay::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.Overlay");
    return (UOverlay*)res;
}
UOverlaySlot* UOverlay::AddChildToOverlay(UWidget* Content) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Overlay.AddChildToOverlay"));
    struct Params_AddChildToOverlay {
        UWidget* Content; // 0x0
        UOverlaySlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AddChildToOverlay params{};
    params.Content = (UWidget*)Content;
    ProcessEvent(func, &params);
    return (UOverlaySlot*)params.ReturnValue;
}
