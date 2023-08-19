#include "FSceneRigStage_Int.hpp"
#include "USceneRigStage_NamedInt.hpp"
#include "USceneRigStage_NamedParameter.hpp"
USceneRigStage_NamedInt* USceneRigStage_NamedInt::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_NamedInt");
    return (USceneRigStage_NamedInt*)res;
}
