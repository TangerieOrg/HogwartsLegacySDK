#include "UActorProvider.hpp"
#include "USceneRigStage_ActorValue.hpp"
#include "USceneRigStage_ParameterValue.hpp"
USceneRigStage_ActorValue* USceneRigStage_ActorValue::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_ActorValue");
    return (USceneRigStage_ActorValue*)res;
}
