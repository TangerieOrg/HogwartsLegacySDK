#include "UMoviePipelineRenderPass.hpp"
#include "UMoviePipelineSetting.hpp"
UMoviePipelineRenderPass* UMoviePipelineRenderPass::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineRenderPass");
    return (UMoviePipelineRenderPass*)res;
}
