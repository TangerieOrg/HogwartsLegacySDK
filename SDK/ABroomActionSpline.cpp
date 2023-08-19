#include "AActor.hpp"
#include "ABroomActionSpline.hpp"
#include "AFlyingBroom.hpp"
#include "EActionsCompleteBehaviour.hpp"
#include "FBroomRiderActionContainer.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FGuid.hpp"
#include "UClass.hpp"
#include "UFlyingBroomPhysics.hpp"
#include "UFunction.hpp"
#include "USplineComponent.hpp"
ABroomActionSpline* ABroomActionSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomActionSpline");
    return (ABroomActionSpline*)res;
}
void ABroomActionSpline::TriggerEndBehaviour(bool bOverrideEndBehaviour, EActionsCompleteBehaviour EndBehaviourOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomActionSpline.TriggerEndBehaviour"));
    struct Params_TriggerEndBehaviour {
        bool bOverrideEndBehaviour; // 0x0
        EActionsCompleteBehaviour EndBehaviourOverride; // 0x1
    }; // Size: 0x2
    Params_TriggerEndBehaviour params{};
    params.bOverrideEndBehaviour = (bool)bOverrideEndBehaviour;
    params.EndBehaviourOverride = (EActionsCompleteBehaviour)EndBehaviourOverride;
    ProcessEvent(func, &params);
}
void ABroomActionSpline::StartBroomActionSequence() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomActionSpline.StartBroomActionSequence"));
    struct Params_StartBroomActionSequence {
    }; // Size: 0x0
    Params_StartBroomActionSequence params{};
    ProcessEvent(func, &params);
}
void ABroomActionSpline::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomActionSpline.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void ABroomActionSpline::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomActionSpline.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
