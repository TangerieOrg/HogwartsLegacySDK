#include "USceneAction_EmissiveAdaptationBase.hpp"
#include "USceneAction_EmissiveAdaptationExtrasSingleBase.hpp"
USceneAction_EmissiveAdaptationExtrasSingleBase* USceneAction_EmissiveAdaptationExtrasSingleBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_EmissiveAdaptationExtrasSingleBase");
    return (USceneAction_EmissiveAdaptationExtrasSingleBase*)res;
}
