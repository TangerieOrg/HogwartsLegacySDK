#include "USceneActionState_EmissiveAdaptationBase.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_EmissiveAdaptationBase* USceneActionState_EmissiveAdaptationBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_EmissiveAdaptationBase");
    return (USceneActionState_EmissiveAdaptationBase*)res;
}
