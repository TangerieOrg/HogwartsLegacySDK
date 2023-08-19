#include "UMoviePipelineImageSequenceOutputBase.hpp"
#include "UMoviePipelineImageSequenceOutput_BMP.hpp"
UMoviePipelineImageSequenceOutput_BMP* UMoviePipelineImageSequenceOutput_BMP::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP");
    return (UMoviePipelineImageSequenceOutput_BMP*)res;
}
