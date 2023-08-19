#include "USceneActionState_WaterRipple.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_WaterRipple* USceneActionState_WaterRipple::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_WaterRipple");
    return (USceneActionState_WaterRipple*)res;
}
