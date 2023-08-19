#include "FSceneRigStage_Vector.hpp"
#include "USceneRigStage_NamedParameter.hpp"
#include "USceneRigStage_NamedVector.hpp"
USceneRigStage_NamedVector* USceneRigStage_NamedVector::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigStage_NamedVector");
    return (USceneRigStage_NamedVector*)res;
}
