#include "UMovieSceneSection.hpp"
#include "UMovieSceneTrack.hpp"
#include "UTestMovieSceneTrack.hpp"
UTestMovieSceneTrack* UTestMovieSceneTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.TestMovieSceneTrack");
    return (UTestMovieSceneTrack*)res;
}
