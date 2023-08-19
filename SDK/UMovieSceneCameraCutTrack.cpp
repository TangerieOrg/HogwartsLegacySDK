#include "UMovieSceneCameraCutTrack.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneCameraCutTrack* UMovieSceneCameraCutTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneCameraCutTrack");
    return (UMovieSceneCameraCutTrack*)res;
}
