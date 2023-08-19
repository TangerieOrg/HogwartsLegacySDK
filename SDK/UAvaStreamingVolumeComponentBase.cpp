#include "EVolumeLoadIdentifier.hpp"
#include "UAvaStreamingVolumeComponentBase.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UAvaStreamingVolumeComponentBase* UAvaStreamingVolumeComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaStreamingVolumeComponentBase");
    return (UAvaStreamingVolumeComponentBase*)res;
}
void UAvaStreamingVolumeComponentBase::SetForcedStateStatus(bool bForced) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponentBase.SetForcedStateStatus"));
    struct Params_SetForcedStateStatus {
        bool bForced; // 0x0
    }; // Size: 0x1
    Params_SetForcedStateStatus params{};
    params.bForced = (bool)bForced;
    ProcessEvent(func, &params);
}
bool UAvaStreamingVolumeComponentBase::IsStateForced() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeComponentBase.IsStateForced"));
    struct Params_IsStateForced {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStateForced params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
