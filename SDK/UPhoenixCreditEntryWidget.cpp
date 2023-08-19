#include "FCreditEntry.hpp"
#include "UFunction.hpp"
#include "UPhoenixCreditEntryWidget.hpp"
#include "UPhoenixUserWidget.hpp"
UPhoenixCreditEntryWidget* UPhoenixCreditEntryWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixCreditEntryWidget");
    return (UPhoenixCreditEntryWidget*)res;
}
void UPhoenixCreditEntryWidget::SetCreditEntryInfo(FCreditEntry CreditEntry) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCreditEntryWidget.SetCreditEntryInfo"));
    struct Params_SetCreditEntryInfo {
        FCreditEntry CreditEntry; // 0x0
    }; // Size: 0x28
    Params_SetCreditEntryInfo params{};
    params.CreditEntry = (FCreditEntry)CreditEntry;
    ProcessEvent(func, &params);
}
void UPhoenixCreditEntryWidget::SetCreditEntryAnimProgress(float Progress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCreditEntryWidget.SetCreditEntryAnimProgress"));
    struct Params_SetCreditEntryAnimProgress {
        float Progress; // 0x0
    }; // Size: 0x4
    Params_SetCreditEntryAnimProgress params{};
    params.Progress = (float)Progress;
    ProcessEvent(func, &params);
}
void UPhoenixCreditEntryWidget::CreditEntryAnimationEnded__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PhoenixCreditEntryWidget.CreditEntryAnimationEnded__DelegateSignature"));
    struct Params_CreditEntryAnimationEnded__DelegateSignature {
    }; // Size: 0x0
    Params_CreditEntryAnimationEnded__DelegateSignature params{};
    ProcessEvent(func, &params);
}
