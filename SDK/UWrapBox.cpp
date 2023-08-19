#include "EOrientation.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UPanelWidget.hpp"
#include "UWidget.hpp"
#include "UWrapBox.hpp"
#include "UWrapBoxSlot.hpp"
void UWrapBox::SetInnerSlotPadding(FVector2D InPadding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WrapBox.SetInnerSlotPadding"));
    struct Params_SetInnerSlotPadding {
        FVector2D InPadding; // 0x0
    }; // Size: 0x8
    Params_SetInnerSlotPadding params{};
    params.InPadding = (FVector2D)InPadding;
    ProcessEvent(func, &params);
}
UWrapBox* UWrapBox::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.WrapBox");
    return (UWrapBox*)res;
}
UWrapBoxSlot* UWrapBox::AddChildToWrapBox(UWidget* Content) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WrapBox.AddChildToWrapBox"));
    struct Params_AddChildToWrapBox {
        UWidget* Content; // 0x0
        UWrapBoxSlot* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AddChildToWrapBox params{};
    params.Content = (UWidget*)Content;
    ProcessEvent(func, &params);
    return (UWrapBoxSlot*)params.ReturnValue;
}
