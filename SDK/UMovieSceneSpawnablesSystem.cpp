#include "UMovieSceneEntitySystem.hpp"
#include "UMovieSceneSpawnablesSystem.hpp"
UMovieSceneSpawnablesSystem* UMovieSceneSpawnablesSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneSpawnablesSystem");
    return (UMovieSceneSpawnablesSystem*)res;
}
