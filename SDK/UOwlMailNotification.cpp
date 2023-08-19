#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UOwlMailNotification.hpp"
UOwlMailNotification* UOwlMailNotification::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OwlMailNotification");
    return (UOwlMailNotification*)res;
}
int32_t UOwlMailNotification::PlayMailDialogLine(FString MailID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OwlMailNotification.PlayMailDialogLine"));
    struct Params_PlayMailDialogLine {
        FString MailID; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_PlayMailDialogLine params{};
    params.MailID = (FString)MailID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
