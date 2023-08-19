#include "FSceneRigAnimationParams.hpp"
#include "UMovieSceneSection.hpp"
#include "USceneRigAnimationSection.hpp"
USceneRigAnimationSection* USceneRigAnimationSection::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigAnimationSection");
    return (USceneRigAnimationSection*)res;
}
