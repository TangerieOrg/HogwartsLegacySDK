#include "UMoviePipelineDeferredPassBase.hpp"
#include "UMoviePipelineDeferredPass_LightingOnly.hpp"
UMoviePipelineDeferredPass_LightingOnly* UMoviePipelineDeferredPass_LightingOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly");
    return (UMoviePipelineDeferredPass_LightingOnly*)res;
}
