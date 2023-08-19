#include "UActorProvider.hpp"
#include "UFloatProvider.hpp"
#include "USceneAction_SlaveToSpline.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_SlaveToSpline* USceneAction_SlaveToSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_SlaveToSpline");
    return (USceneAction_SlaveToSpline*)res;
}
