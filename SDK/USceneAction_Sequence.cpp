#include "FSceneActionSequence_ActorMapping.hpp"
#include "ULevelSequence.hpp"
#include "USceneAction_Sequence.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_Sequence* USceneAction_Sequence::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_Sequence");
    return (USceneAction_Sequence*)res;
}
