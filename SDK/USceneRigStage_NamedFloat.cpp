#include "FSceneRigStage_Float.hpp"
#include "USceneRigStage_NamedFloat.hpp"
#include "USceneRigStage_NamedParameter.hpp"
USceneRigStage_NamedFloat* USceneRigStage_NamedFloat::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_NamedFloat");
    return (USceneRigStage_NamedFloat*)res;
}
