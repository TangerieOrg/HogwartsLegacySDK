#include "EUIGameOverReason.hpp"
#include "UFunction.hpp"
#include "UMissionFailScreenBase.hpp"
#include "UScreen.hpp"
UMissionFailScreenBase* UMissionFailScreenBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MissionFailScreenBase");
    return (UMissionFailScreenBase*)res;
}
void UMissionFailScreenBase::SetReason(EUIGameOverReason Reason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionFailScreenBase.SetReason"));
    struct Params_SetReason {
        EUIGameOverReason Reason; // 0x0
    }; // Size: 0x1
    Params_SetReason params{};
    params.Reason = (EUIGameOverReason)Reason;
    ProcessEvent(func, &params);
}
void UMissionFailScreenBase::SetDisplayText(FString Title, FString Description) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionFailScreenBase.SetDisplayText"));
    struct Params_SetDisplayText {
        FString Title; // 0x0
        FString Description; // 0x10
    }; // Size: 0x20
    Params_SetDisplayText params{};
    params.Title = (FString)Title;
    params.Description = (FString)Description;
    ProcessEvent(func, &params);
}
void UMissionFailScreenBase::CannotAbandonQuest() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MissionFailScreenBase.CannotAbandonQuest"));
    struct Params_CannotAbandonQuest {
    }; // Size: 0x0
    Params_CannotAbandonQuest params{};
    ProcessEvent(func, &params);
}
