#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskTrigger.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USphereComponent.hpp"
UAIPerformTaskTrigger* UAIPerformTaskTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskTrigger");
    return (UAIPerformTaskTrigger*)res;
}
void UAIPerformTaskTrigger::OnWaitTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AIPerformTaskTrigger.OnWaitTriggerOverlap"));
    struct Params_OnWaitTriggerOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnWaitTriggerOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
