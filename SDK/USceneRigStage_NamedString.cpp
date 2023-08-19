#include "FSceneRigStage_String.hpp"
#include "USceneRigStage_NamedParameter.hpp"
#include "USceneRigStage_NamedString.hpp"
USceneRigStage_NamedString* USceneRigStage_NamedString::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_NamedString");
    return (USceneRigStage_NamedString*)res;
}
