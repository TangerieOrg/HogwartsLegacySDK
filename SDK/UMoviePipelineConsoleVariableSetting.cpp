#include "UMoviePipelineConsoleVariableSetting.hpp"
#include "UMoviePipelineSetting.hpp"
UMoviePipelineConsoleVariableSetting* UMoviePipelineConsoleVariableSetting::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting");
    return (UMoviePipelineConsoleVariableSetting*)res;
}
