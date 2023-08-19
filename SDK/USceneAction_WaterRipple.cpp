#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WaterRipple.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_WaterRipple* USceneAction_WaterRipple::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_WaterRipple");
    return (USceneAction_WaterRipple*)res;
}
