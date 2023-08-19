#include "UMoviePipelineDeferredPassBase.hpp"
#include "UMoviePipelineDeferredPass_DetailLighting.hpp"
UMoviePipelineDeferredPass_DetailLighting* UMoviePipelineDeferredPass_DetailLighting::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting");
    return (UMoviePipelineDeferredPass_DetailLighting*)res;
}
