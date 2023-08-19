#include "UMovieSceneEventSystem.hpp"
#include "UMovieScenePostSpawnEventSystem.hpp"
UMovieScenePostSpawnEventSystem* UMovieScenePostSpawnEventSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScenePostSpawnEventSystem");
    return (UMovieScenePostSpawnEventSystem*)res;
}
