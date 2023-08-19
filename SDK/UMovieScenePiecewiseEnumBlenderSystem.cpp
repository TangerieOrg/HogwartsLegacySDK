#include "UMovieSceneBlenderSystem.hpp"
#include "UMovieScenePiecewiseEnumBlenderSystem.hpp"
UMovieScenePiecewiseEnumBlenderSystem* UMovieScenePiecewiseEnumBlenderSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem");
    return (UMovieScenePiecewiseEnumBlenderSystem*)res;
}
