#include "AActor.hpp"
#include "ASceneRigActor.hpp"
#include "FTransform.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UScheduledEntity.hpp"
UAIPerformTaskBase* UAIPerformTaskBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskBase");
    return (UAIPerformTaskBase*)res;
}
void UAIPerformTaskBase::OnPerformTaskExecutionCompleteImp(UScheduledEntity* ScheduledEntity, int32_t ActivityTypeBits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AIPerformTaskBase.OnPerformTaskExecutionCompleteImp"));
    struct Params_OnPerformTaskExecutionCompleteImp {
        UScheduledEntity* ScheduledEntity; // 0x0
        int32_t ActivityTypeBits; // 0x8
    }; // Size: 0xc
    Params_OnPerformTaskExecutionCompleteImp params{};
    params.ScheduledEntity = (UScheduledEntity*)ScheduledEntity;
    params.ActivityTypeBits = (int32_t)ActivityTypeBits;
    ProcessEvent(func, &params);
}
void UAIPerformTaskBase::OnFleshLoadComplete(AActor* FleshActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AIPerformTaskBase.OnFleshLoadComplete"));
    struct Params_OnFleshLoadComplete {
        AActor* FleshActor; // 0x0
    }; // Size: 0x8
    Params_OnFleshLoadComplete params{};
    params.FleshActor = (AActor*)FleshActor;
    ProcessEvent(func, &params);
}
