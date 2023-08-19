#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "USocialJournalHeadlineWidget.hpp"
#include "UUserWidget.hpp"
void USocialJournalHeadlineWidget::InitDetails() {}
USocialJournalHeadlineWidget* USocialJournalHeadlineWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SocialJournalHeadlineWidget");
    return (USocialJournalHeadlineWidget*)res;
}
void USocialJournalHeadlineWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialJournalHeadlineWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
