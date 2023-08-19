#include "UMoviePipelineImageSequenceOutputBase.hpp"
#include "UMoviePipelineImageSequenceOutput_JPG.hpp"
UMoviePipelineImageSequenceOutput_JPG* UMoviePipelineImageSequenceOutput_JPG::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG");
    return (UMoviePipelineImageSequenceOutput_JPG*)res;
}
