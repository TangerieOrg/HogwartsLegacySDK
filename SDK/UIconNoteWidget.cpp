#include "UFunction.hpp"
#include "UIconNoteWidget.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUserWidget.hpp"
UIconNoteWidget* UIconNoteWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.IconNoteWidget");
    return (UIconNoteWidget*)res;
}
void UIconNoteWidget::SetDetails(FString IconName, int32_t Quantity) {}
void UIconNoteWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IconNoteWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
