#include "UControlRig.hpp"
#include "UMovieSceneControlRigParameterTrack.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneControlRigParameterTrack* UMovieSceneControlRigParameterTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.MovieSceneControlRigParameterTrack");
    return (UMovieSceneControlRigParameterTrack*)res;
}
