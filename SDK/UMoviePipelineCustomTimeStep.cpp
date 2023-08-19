#include "UEngineCustomTimeStep.hpp"
#include "UMoviePipelineCustomTimeStep.hpp"
UMoviePipelineCustomTimeStep* UMoviePipelineCustomTimeStep::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineCustomTimeStep");
    return (UMoviePipelineCustomTimeStep*)res;
}
