#include "UMoviePipelineDeferredPassBase.hpp"
#include "UMoviePipelineDeferredPass_PathTracer.hpp"
UMoviePipelineDeferredPass_PathTracer* UMoviePipelineDeferredPass_PathTracer::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer");
    return (UMoviePipelineDeferredPass_PathTracer*)res;
}
