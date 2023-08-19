#include "UCanvasPanel.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UFunction.hpp"
#include "UPanelWidget.hpp"
#include "UWidget.hpp"
UCanvasPanel* UCanvasPanel::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.CanvasPanel");
    return (UCanvasPanel*)res;
}
UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(UWidget* Content) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanel.AddChildToCanvas"));
    struct Params_AddChildToCanvas {
        UWidget* Content; // 0x0
        UCanvasPanelSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AddChildToCanvas params{};
    params.Content = (UWidget*)Content;
    ProcessEvent(func, &params);
    return (UCanvasPanelSlot*)params.ReturnValue;
}
