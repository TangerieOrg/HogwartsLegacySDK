#include "UMoviePipelineOutputBase.hpp"
#include "UMoviePipelineWaveOutput.hpp"
UMoviePipelineWaveOutput* UMoviePipelineWaveOutput::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput");
    return (UMoviePipelineWaveOutput*)res;
}
