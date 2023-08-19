#include "UMovieSceneEventSystem.hpp"
#include "UMovieScenePreSpawnEventSystem.hpp"
UMovieScenePreSpawnEventSystem* UMovieScenePreSpawnEventSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScenePreSpawnEventSystem");
    return (UMovieScenePreSpawnEventSystem*)res;
}
