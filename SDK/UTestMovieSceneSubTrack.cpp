#include "UMovieSceneSection.hpp"
#include "UMovieSceneSubTrack.hpp"
#include "UTestMovieSceneSubTrack.hpp"
UTestMovieSceneSubTrack* UTestMovieSceneSubTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.TestMovieSceneSubTrack");
    return (UTestMovieSceneSubTrack*)res;
}
