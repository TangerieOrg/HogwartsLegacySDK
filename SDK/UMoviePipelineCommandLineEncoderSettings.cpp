#include "UDeveloperSettings.hpp"
#include "UMoviePipelineCommandLineEncoderSettings.hpp"
UMoviePipelineCommandLineEncoderSettings* UMoviePipelineCommandLineEncoderSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings");
    return (UMoviePipelineCommandLineEncoderSettings*)res;
}
