#include "FSceneRigStage_Name.hpp"
#include "USceneRigStage_NamedName.hpp"
#include "USceneRigStage_NamedParameter.hpp"
USceneRigStage_NamedName* USceneRigStage_NamedName::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_NamedName");
    return (USceneRigStage_NamedName*)res;
}
