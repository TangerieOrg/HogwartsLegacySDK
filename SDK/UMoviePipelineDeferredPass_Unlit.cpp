#include "UMoviePipelineDeferredPassBase.hpp"
#include "UMoviePipelineDeferredPass_Unlit.hpp"
UMoviePipelineDeferredPass_Unlit* UMoviePipelineDeferredPass_Unlit::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit");
    return (UMoviePipelineDeferredPass_Unlit*)res;
}
