#include "USceneActionState_FunctionEvent.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_FunctionEvent* USceneActionState_FunctionEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_FunctionEvent");
    return (USceneActionState_FunctionEvent*)res;
}
