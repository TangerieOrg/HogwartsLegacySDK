#include "UMoviePipelineDeferredPassBase.hpp"
#include "UMoviePipelineDeferredPass_ReflectionsOnly.hpp"
UMoviePipelineDeferredPass_ReflectionsOnly* UMoviePipelineDeferredPass_ReflectionsOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly");
    return (UMoviePipelineDeferredPass_ReflectionsOnly*)res;
}
