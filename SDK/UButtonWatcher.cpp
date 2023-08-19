#include "UBaseWatcher.hpp"
#include "UButtonWatcher.hpp"
#include "UFunction.hpp"
#include "UWatcherRecord.hpp"
void UButtonWatcher::FlushQueuedActions(UWatcherRecord* InWatcherRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ButtonWatcher.FlushQueuedActions"));
    struct Params_FlushQueuedActions {
        UWatcherRecord* InWatcherRecord; // 0x0
    }; // Size: 0x8
    Params_FlushQueuedActions params{};
    params.InWatcherRecord = (UWatcherRecord*)InWatcherRecord;
    ProcessEvent(func, &params);
}
UButtonWatcher* UButtonWatcher::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.ButtonWatcher");
    return (UButtonWatcher*)res;
}
void UButtonWatcher::ModifierChanged(bool NewResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ButtonWatcher.ModifierChanged"));
    struct Params_ModifierChanged {
        bool NewResult; // 0x0
    }; // Size: 0x1
    Params_ModifierChanged params{};
    params.NewResult = (bool)NewResult;
    ProcessEvent(func, &params);
}
void UButtonWatcher::ExpressionChanged(bool NewResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ButtonWatcher.ExpressionChanged"));
    struct Params_ExpressionChanged {
        bool NewResult; // 0x0
    }; // Size: 0x1
    Params_ExpressionChanged params{};
    params.NewResult = (bool)NewResult;
    ProcessEvent(func, &params);
}
void UButtonWatcher::ActionInitiate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ButtonWatcher.ActionInitiate"));
    struct Params_ActionInitiate {
    }; // Size: 0x0
    Params_ActionInitiate params{};
    ProcessEvent(func, &params);
}
void UButtonWatcher::ButtonPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ButtonWatcher.ButtonPressed"));
    struct Params_ButtonPressed {
    }; // Size: 0x0
    Params_ButtonPressed params{};
    ProcessEvent(func, &params);
}
void UButtonWatcher::ButtonReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ButtonWatcher.ButtonReleased"));
    struct Params_ButtonReleased {
    }; // Size: 0x0
    Params_ButtonReleased params{};
    ProcessEvent(func, &params);
}
void UButtonWatcher::ActionCancel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.ButtonWatcher.ActionCancel"));
    struct Params_ActionCancel {
    }; // Size: 0x0
    Params_ActionCancel params{};
    ProcessEvent(func, &params);
}
