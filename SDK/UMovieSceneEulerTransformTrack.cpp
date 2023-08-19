#include "UMovieSceneEulerTransformTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
UMovieSceneEulerTransformTrack* UMovieSceneEulerTransformTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneEulerTransformTrack");
    return (UMovieSceneEulerTransformTrack*)res;
}
