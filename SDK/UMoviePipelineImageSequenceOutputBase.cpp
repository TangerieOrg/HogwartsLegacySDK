#include "UMoviePipelineImageSequenceOutputBase.hpp"
#include "UMoviePipelineOutputBase.hpp"
UMoviePipelineImageSequenceOutputBase* UMoviePipelineImageSequenceOutputBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase");
    return (UMoviePipelineImageSequenceOutputBase*)res;
}
