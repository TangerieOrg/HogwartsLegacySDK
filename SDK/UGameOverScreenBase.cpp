#include "EUIGameOverReason.hpp"
#include "UFunction.hpp"
#include "UGameOverScreenBase.hpp"
#include "UScreen.hpp"
UGameOverScreenBase* UGameOverScreenBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GameOverScreenBase");
    return (UGameOverScreenBase*)res;
}
void UGameOverScreenBase::ShowLoadSaveResultPopup(FString ResultMessage, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GameOverScreenBase.ShowLoadSaveResultPopup"));
    struct Params_ShowLoadSaveResultPopup {
        FString ResultMessage; // 0x0
        float Duration; // 0x10
    }; // Size: 0x14
    Params_ShowLoadSaveResultPopup params{};
    params.ResultMessage = (FString)ResultMessage;
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
}
void UGameOverScreenBase::SetRestartButtonText(FString ButtonText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GameOverScreenBase.SetRestartButtonText"));
    struct Params_SetRestartButtonText {
        FString ButtonText; // 0x0
    }; // Size: 0x10
    Params_SetRestartButtonText params{};
    params.ButtonText = (FString)ButtonText;
    ProcessEvent(func, &params);
}
void UGameOverScreenBase::SetGameOverReason(EUIGameOverReason Reason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GameOverScreenBase.SetGameOverReason"));
    struct Params_SetGameOverReason {
        EUIGameOverReason Reason; // 0x0
    }; // Size: 0x1
    Params_SetGameOverReason params{};
    params.Reason = (EUIGameOverReason)Reason;
    ProcessEvent(func, &params);
}
void UGameOverScreenBase::CannotAbandonQuest() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.GameOverScreenBase.CannotAbandonQuest"));
    struct Params_CannotAbandonQuest {
    }; // Size: 0x0
    Params_CannotAbandonQuest params{};
    ProcessEvent(func, &params);
}
