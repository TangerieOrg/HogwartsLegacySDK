#include "UMovieSceneSection.hpp"
#include "UMovieSceneTrack.hpp"
#include "UTestMovieSceneEvalHookTrack.hpp"
UTestMovieSceneEvalHookTrack* UTestMovieSceneEvalHookTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.TestMovieSceneEvalHookTrack");
    return (UTestMovieSceneEvalHookTrack*)res;
}
