#include "AActor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAvaStreamingLevelVolumeComponentBase.hpp"
#include "UAvaStreamingVolumeComponentBase.hpp"
#include "UFunction.hpp"
#include "ULevelStreamingDynamic.hpp"
UAvaStreamingLevelVolumeComponentBase* UAvaStreamingLevelVolumeComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaStreamingLevelVolumeComponentBase");
    return (UAvaStreamingLevelVolumeComponentBase*)res;
}
FRotator UAvaStreamingLevelVolumeComponentBase::GetLevelRot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingLevelVolumeComponentBase.GetLevelRot"));
    struct Params_GetLevelRot {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLevelRot params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector UAvaStreamingLevelVolumeComponentBase::GetLevelLoc() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvaStreamingLevelVolumeComponentBase.GetLevelLoc"));
    struct Params_GetLevelLoc {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLevelLoc params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
