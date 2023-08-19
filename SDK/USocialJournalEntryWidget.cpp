#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "USocialJournalEntryWidget.hpp"
#include "UUserWidget.hpp"
USocialJournalEntryWidget* USocialJournalEntryWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SocialJournalEntryWidget");
    return (USocialJournalEntryWidget*)res;
}
void USocialJournalEntryWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialJournalEntryWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
void USocialJournalEntryWidget::InitDetails(FString inIconObserverName, FString inIconObserverTypeName, FString inIconSourceName, int32_t InCount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SocialJournalEntryWidget.InitDetails"));
    struct Params_InitDetails {
        FString inIconObserverName; // 0x0
        FString inIconObserverTypeName; // 0x10
        FString inIconSourceName; // 0x20
        int32_t InCount; // 0x30
    }; // Size: 0x34
    Params_InitDetails params{};
    params.inIconObserverName = (FString)inIconObserverName;
    params.inIconObserverTypeName = (FString)inIconObserverTypeName;
    params.inIconSourceName = (FString)inIconSourceName;
    params.InCount = (int32_t)InCount;
    ProcessEvent(func, &params);
}
