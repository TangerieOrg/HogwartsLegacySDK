#include "UMovieSceneSection.hpp"
#include "UTestMovieSceneSection.hpp"
UTestMovieSceneSection* UTestMovieSceneSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.TestMovieSceneSection");
    return (UTestMovieSceneSection*)res;
}
