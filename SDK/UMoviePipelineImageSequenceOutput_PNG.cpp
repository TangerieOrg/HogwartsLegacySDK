#include "UMoviePipelineImageSequenceOutputBase.hpp"
#include "UMoviePipelineImageSequenceOutput_PNG.hpp"
UMoviePipelineImageSequenceOutput_PNG* UMoviePipelineImageSequenceOutput_PNG::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG");
    return (UMoviePipelineImageSequenceOutput_PNG*)res;
}
