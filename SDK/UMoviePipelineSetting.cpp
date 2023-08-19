#include "UFunction.hpp"
#include "UMoviePipelineSetting.hpp"
#include "UObject.hpp"
UMoviePipelineSetting* UMoviePipelineSetting::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineSetting");
    return (UMoviePipelineSetting*)res;
}
void UMoviePipelineSetting::BuildNewProcessCommandLine(FString& InOutUnrealURLParams, FString& InOutCommandLineArgs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine"));
    struct Params_BuildNewProcessCommandLine {
        FString InOutUnrealURLParams; // 0x0
        FString InOutCommandLineArgs; // 0x10
    }; // Size: 0x20
    Params_BuildNewProcessCommandLine params{};
    params.InOutUnrealURLParams = (FString)InOutUnrealURLParams;
    params.InOutCommandLineArgs = (FString)InOutCommandLineArgs;
    ProcessEvent(func, &params);
    InOutUnrealURLParams = params.InOutUnrealURLParams;
    InOutCommandLineArgs = params.InOutCommandLineArgs;
}
