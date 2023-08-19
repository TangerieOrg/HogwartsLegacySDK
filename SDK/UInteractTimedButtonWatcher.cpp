#include "AActor.hpp"
#include "UAISense.hpp"
#include "UFunction.hpp"
#include "UInteractTimedButtonWatcher.hpp"
#include "UTimedButtonWatcher.hpp"
void UInteractTimedButtonWatcher::TargetChanged(UAISense* Sense, AActor* NewTarget, AActor* OldTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InteractTimedButtonWatcher.TargetChanged"));
    struct Params_TargetChanged {
        UAISense* Sense; // 0x0
        AActor* NewTarget; // 0x8
        AActor* OldTarget; // 0x10
    }; // Size: 0x18
    Params_TargetChanged params{};
    params.Sense = (UAISense*)Sense;
    params.NewTarget = (AActor*)NewTarget;
    params.OldTarget = (AActor*)OldTarget;
    ProcessEvent(func, &params);
}
UInteractTimedButtonWatcher* UInteractTimedButtonWatcher::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InteractTimedButtonWatcher");
    return (UInteractTimedButtonWatcher*)res;
}
void UInteractTimedButtonWatcher::TargetSighted(UAISense* Sense, AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InteractTimedButtonWatcher.TargetSighted"));
    struct Params_TargetSighted {
        UAISense* Sense; // 0x0
        AActor* Target; // 0x8
    }; // Size: 0x10
    Params_TargetSighted params{};
    params.Sense = (UAISense*)Sense;
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
