#include "FSceneRigDialogTrackSectionData.hpp"
#include "UMovieSceneSection.hpp"
#include "USceneRigDialogTrackSection.hpp"
USceneRigDialogTrackSection* USceneRigDialogTrackSection::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigDialogTrackSection");
    return (USceneRigDialogTrackSection*)res;
}
