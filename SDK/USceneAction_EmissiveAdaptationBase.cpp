#include "FBlendDomain.hpp"
#include "USceneAction_EmissiveAdaptationBase.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_EmissiveAdaptationBase* USceneAction_EmissiveAdaptationBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_EmissiveAdaptationBase");
    return (USceneAction_EmissiveAdaptationBase*)res;
}
