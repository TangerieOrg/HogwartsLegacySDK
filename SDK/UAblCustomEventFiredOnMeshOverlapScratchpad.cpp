#include "AActor.hpp"
#include "FHitResult.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblCustomEventFiredOnMeshOverlapScratchpad.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
UAblCustomEventFiredOnMeshOverlapScratchpad* UAblCustomEventFiredOnMeshOverlapScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCustomEventFiredOnMeshOverlapScratchpad");
    return (UAblCustomEventFiredOnMeshOverlapScratchpad*)res;
}
void UAblCustomEventFiredOnMeshOverlapScratchpad::HandleOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AblCustomEventFiredOnMeshOverlapScratchpad.HandleOverlapBegin"));
    struct Params_HandleOverlapBegin {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_HandleOverlapBegin params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
