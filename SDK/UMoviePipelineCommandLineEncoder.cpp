#include "EMoviePipelineEncodeQuality.hpp"
#include "UMoviePipelineCommandLineEncoder.hpp"
#include "UMoviePipelineSetting.hpp"
UMoviePipelineCommandLineEncoder* UMoviePipelineCommandLineEncoder::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineCommandLineEncoder");
    return (UMoviePipelineCommandLineEncoder*)res;
}
