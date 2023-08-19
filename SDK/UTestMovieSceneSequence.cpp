#include "UMovieScene.hpp"
#include "UMovieSceneSequence.hpp"
#include "UTestMovieSceneSequence.hpp"
UTestMovieSceneSequence* UTestMovieSceneSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.TestMovieSceneSequence");
    return (UTestMovieSceneSequence*)res;
}
