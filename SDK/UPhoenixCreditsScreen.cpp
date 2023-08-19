#include "FAnimatedCreditEntry.hpp"
#include "FCreditEntry.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UPhoenixCreditEntryWidget.hpp"
#include "UPhoenixCreditsScreen.hpp"
#include "UScreen.hpp"
UPhoenixCreditsScreen* UPhoenixCreditsScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixCreditsScreen");
    return (UPhoenixCreditsScreen*)res;
}
void UPhoenixCreditsScreen::StartRollingCredits() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCreditsScreen.StartRollingCredits"));
    struct Params_StartRollingCredits {
    }; // Size: 0x0
    Params_StartRollingCredits params{};
    ProcessEvent(func, &params);
}
UPhoenixCreditEntryWidget* UPhoenixCreditsScreen::CreateCreditEntry(FCreditEntry CreditEntry) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixCreditsScreen.CreateCreditEntry"));
    struct Params_CreateCreditEntry {
        FCreditEntry CreditEntry; // 0x0
        UPhoenixCreditEntryWidget* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_CreateCreditEntry params{};
    params.CreditEntry = (FCreditEntry)CreditEntry;
    ProcessEvent(func, &params);
    return (UPhoenixCreditEntryWidget*)params.ReturnValue;
}
