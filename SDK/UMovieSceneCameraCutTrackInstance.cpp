#include "UMovieSceneCameraCutTrackInstance.hpp"
#include "UMovieSceneTrackInstance.hpp"
UMovieSceneCameraCutTrackInstance* UMovieSceneCameraCutTrackInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneCameraCutTrackInstance");
    return (UMovieSceneCameraCutTrackInstance*)res;
}
