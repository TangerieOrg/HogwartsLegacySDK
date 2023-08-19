#include "FMovieSceneObjectBindingID.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
#include "USceneRigDialogTrack.hpp"
USceneRigDialogTrack* USceneRigDialogTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigDialogTrack");
    return (USceneRigDialogTrack*)res;
}
