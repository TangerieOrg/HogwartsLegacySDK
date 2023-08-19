#include "AActor.hpp"
#include "AAvaStreamingVolumeSet.hpp"
#include "EVolumeLoadIdentifier.hpp"
#include "UAvaStreamingVolumeComponentBase.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UAvaStreamingVolumeComponentBase* AAvaStreamingVolumeSet::GetMaster() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeSet.GetMaster"));
    struct Params_GetMaster {
        UAvaStreamingVolumeComponentBase* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMaster params{};
    ProcessEvent(func, &params);
    return (UAvaStreamingVolumeComponentBase*)params.ReturnValue;
}
AAvaStreamingVolumeSet* AAvaStreamingVolumeSet::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaStreamingVolumeSet");
    return (AAvaStreamingVolumeSet*)res;
}
void AAvaStreamingVolumeSet::SetForcedStateStatus(bool bForced) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeSet.SetForcedStateStatus"));
    struct Params_SetForcedStateStatus {
        bool bForced; // 0x0
    }; // Size: 0x1
    Params_SetForcedStateStatus params{};
    params.bForced = (bool)bForced;
    ProcessEvent(func, &params);
}
bool AAvaStreamingVolumeSet::IsStateForced() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingVolumeSet.IsStateForced"));
    struct Params_IsStateForced {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStateForced params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
