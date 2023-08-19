#include "EEXRCompressionFormat.hpp"
#include "UMoviePipelineImageSequenceOutputBase.hpp"
#include "UMoviePipelineImageSequenceOutput_EXR.hpp"
UMoviePipelineImageSequenceOutput_EXR* UMoviePipelineImageSequenceOutput_EXR::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR");
    return (UMoviePipelineImageSequenceOutput_EXR*)res;
}
