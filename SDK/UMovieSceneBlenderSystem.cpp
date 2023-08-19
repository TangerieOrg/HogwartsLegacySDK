#include "UMovieSceneBlenderSystem.hpp"
#include "UMovieSceneEntitySystem.hpp"
UMovieSceneBlenderSystem* UMovieSceneBlenderSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneBlenderSystem");
    return (UMovieSceneBlenderSystem*)res;
}
