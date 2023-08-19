#include "UMovieSceneEntitySystem.hpp"
#include "UMovieSceneEntitySystemLinker.hpp"
#include "UObject.hpp"
UMovieSceneEntitySystem* UMovieSceneEntitySystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneEntitySystem");
    return (UMovieSceneEntitySystem*)res;
}
