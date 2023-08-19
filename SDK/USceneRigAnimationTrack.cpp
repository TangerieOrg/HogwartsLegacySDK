#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
#include "USceneRigAnimationTrack.hpp"
USceneRigAnimationTrack* USceneRigAnimationTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigAnimationTrack");
    return (USceneRigAnimationTrack*)res;
}
