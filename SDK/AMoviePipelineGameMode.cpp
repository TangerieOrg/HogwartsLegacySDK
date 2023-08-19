#include "AGameModeBase.hpp"
#include "AMoviePipelineGameMode.hpp"
AMoviePipelineGameMode* AMoviePipelineGameMode::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineGameMode");
    return (AMoviePipelineGameMode*)res;
}
