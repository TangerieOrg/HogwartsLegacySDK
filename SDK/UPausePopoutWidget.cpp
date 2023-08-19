#include "UFunction.hpp"
#include "UHeaderWidget.hpp"
#include "UPausePopoutWidget.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUserWidget.hpp"
UPausePopoutWidget* UPausePopoutWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PausePopoutWidget");
    return (UPausePopoutWidget*)res;
}
void UPausePopoutWidget::SetPopoutData() {}
void UPausePopoutWidget::OnPopoutDataSet() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PausePopoutWidget.OnPopoutDataSet"));
    struct Params_OnPopoutDataSet {
    }; // Size: 0x0
    Params_OnPopoutDataSet params{};
    ProcessEvent(func, &params);
}
