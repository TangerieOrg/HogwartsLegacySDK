#include "FSceneActionFunctionEventReference.hpp"
#include "USceneAction_FunctionEvent.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_FunctionEvent* USceneAction_FunctionEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_FunctionEvent");
    return (USceneAction_FunctionEvent*)res;
}
