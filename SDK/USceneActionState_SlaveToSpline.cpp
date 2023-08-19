#include "USceneActionState_SlaveToSpline.hpp"
#include "USceneRigObjectActionState.hpp"
#include "USplineComponent.hpp"
USceneActionState_SlaveToSpline* USceneActionState_SlaveToSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_SlaveToSpline");
    return (USceneActionState_SlaveToSpline*)res;
}
