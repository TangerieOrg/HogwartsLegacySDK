#include "UFunction.hpp"
#include "USceneActionState_PerformTaskFollowSpline.hpp"
#include "USceneRigObjectActionState.hpp"
#include "UScheduledEntity.hpp"
USceneActionState_PerformTaskFollowSpline* USceneActionState_PerformTaskFollowSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_PerformTaskFollowSpline");
    return (USceneActionState_PerformTaskFollowSpline*)res;
}
void USceneActionState_PerformTaskFollowSpline::OnSplineCompleted(UScheduledEntity* InScheduledEntity, int32_t ActivityTypeBits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneActionState_PerformTaskFollowSpline.OnSplineCompleted"));
    struct Params_OnSplineCompleted {
        UScheduledEntity* InScheduledEntity; // 0x0
        int32_t ActivityTypeBits; // 0x8
    }; // Size: 0xc
    Params_OnSplineCompleted params{};
    params.InScheduledEntity = (UScheduledEntity*)InScheduledEntity;
    params.ActivityTypeBits = (int32_t)ActivityTypeBits;
    ProcessEvent(func, &params);
}
