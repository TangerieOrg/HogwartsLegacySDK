#include "UMovieSceneMarginPropertySystem.hpp"
#include "UMovieScenePropertySystem.hpp"
UMovieSceneMarginPropertySystem* UMovieSceneMarginPropertySystem::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.MovieSceneMarginPropertySystem");
    return (UMovieSceneMarginPropertySystem*)res;
}
