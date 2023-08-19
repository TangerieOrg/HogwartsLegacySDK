#include "UMovieSceneEntitySystem.hpp"
#include "UMovieSceneMotionVectorSimulationSystem.hpp"
UMovieSceneMotionVectorSimulationSystem* UMovieSceneMotionVectorSimulationSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneMotionVectorSimulationSystem");
    return (UMovieSceneMotionVectorSimulationSystem*)res;
}
