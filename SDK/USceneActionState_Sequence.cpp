#include "ULevelSequencePlayer.hpp"
#include "UMovieSceneBindingOverrides.hpp"
#include "USceneActionState_Sequence.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_Sequence* USceneActionState_Sequence::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_Sequence");
    return (USceneActionState_Sequence*)res;
}
