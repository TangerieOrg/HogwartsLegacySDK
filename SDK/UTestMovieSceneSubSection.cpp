#include "UMovieSceneSubSection.hpp"
#include "UTestMovieSceneSubSection.hpp"
UTestMovieSceneSubSection* UTestMovieSceneSubSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.TestMovieSceneSubSection");
    return (UTestMovieSceneSubSection*)res;
}
