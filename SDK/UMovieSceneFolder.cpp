#include "UMovieSceneFolder.hpp"
#include "UMovieSceneTrack.hpp"
#include "UObject.hpp"
UMovieSceneFolder* UMovieSceneFolder::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneFolder");
    return (UMovieSceneFolder*)res;
}
