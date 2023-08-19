#include "UMoviePipelineImagePassBase.hpp"
#include "UMoviePipelineRenderPass.hpp"
UMoviePipelineImagePassBase* UMoviePipelineImagePassBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase");
    return (UMoviePipelineImagePassBase*)res;
}
