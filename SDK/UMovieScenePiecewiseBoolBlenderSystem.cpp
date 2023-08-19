#include "UMovieSceneBlenderSystem.hpp"
#include "UMovieScenePiecewiseBoolBlenderSystem.hpp"
UMovieScenePiecewiseBoolBlenderSystem* UMovieScenePiecewiseBoolBlenderSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem");
    return (UMovieScenePiecewiseBoolBlenderSystem*)res;
}
