#include "AActor.hpp"
#include "UFunction.hpp"
#include "UUberExposureDriver.hpp"
#include "UUberExposureDriverBlueprintBase.hpp"
#include "UWorld.hpp"
UUberExposureDriverBlueprintBase* UUberExposureDriverBlueprintBase::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.UberExposureDriverBlueprintBase");
    return (UUberExposureDriverBlueprintBase*)res;
}
float UUberExposureDriverBlueprintBase::UberExposureDriverGetValue(UWorld* World, AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.UberExposureDriverBlueprintBase.UberExposureDriverGetValue"));
    struct Params_UberExposureDriverGetValue {
        UWorld* World; // 0x0
        AActor* Owner; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_UberExposureDriverGetValue params{};
    params.World = (UWorld*)World;
    params.Owner = (AActor*)Owner;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
