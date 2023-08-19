#include "EPerformTaskFinishAction.hpp"
#include "UActorProvider.hpp"
#include "USceneAction_PerformTaskFollowSpline.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_PerformTaskFollowSpline* USceneAction_PerformTaskFollowSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_PerformTaskFollowSpline");
    return (USceneAction_PerformTaskFollowSpline*)res;
}
