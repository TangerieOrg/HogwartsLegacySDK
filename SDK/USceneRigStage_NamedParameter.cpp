#include "UObject.hpp"
#include "USceneRigStage_NamedParameter.hpp"
USceneRigStage_NamedParameter* USceneRigStage_NamedParameter::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_NamedParameter");
    return (USceneRigStage_NamedParameter*)res;
}
