#include "UAIPerformTaskApparateToLocation.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UScheduledEntity.hpp"
UAIPerformTaskApparateToLocation* UAIPerformTaskApparateToLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskApparateToLocation");
    return (UAIPerformTaskApparateToLocation*)res;
}
void UAIPerformTaskApparateToLocation::OnApparateOutCompleted(UScheduledEntity* InScheduledEntity, int32_t ActivityTypeBits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AIPerformTaskApparateToLocation.OnApparateOutCompleted"));
    struct Params_OnApparateOutCompleted {
        UScheduledEntity* InScheduledEntity; // 0x0
        int32_t ActivityTypeBits; // 0x8
    }; // Size: 0xc
    Params_OnApparateOutCompleted params{};
    params.InScheduledEntity = (UScheduledEntity*)InScheduledEntity;
    params.ActivityTypeBits = (int32_t)ActivityTypeBits;
    ProcessEvent(func, &params);
}
