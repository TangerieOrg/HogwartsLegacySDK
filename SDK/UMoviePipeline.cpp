#include "ALevelSequenceActor.hpp"
#include "UClass.hpp"
#include "UEngineCustomTimeStep.hpp"
#include "UFunction.hpp"
#include "ULevelSequence.hpp"
#include "UMoviePipeline.hpp"
#include "UMoviePipelineCustomTimeStep.hpp"
#include "UMoviePipelineExecutorJob.hpp"
#include "UMoviePipelineMasterConfig.hpp"
#include "UMovieRenderDebugWidget.hpp"
#include "UObject.hpp"
#include "UTexture.hpp"
void UMoviePipeline::Initialize(UMoviePipelineExecutorJob* InJob) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipeline.Initialize"));
    struct Params_Initialize {
        UMoviePipelineExecutorJob* InJob; // 0x0
    }; // Size: 0x8
    Params_Initialize params{};
    params.InJob = (UMoviePipelineExecutorJob*)InJob;
    ProcessEvent(func, &params);
}
UMoviePipeline* UMoviePipeline::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipeline");
    return (UMoviePipeline*)res;
}
void UMoviePipeline::OnMoviePipelineFinishedImpl() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl"));
    struct Params_OnMoviePipelineFinishedImpl {
    }; // Size: 0x0
    Params_OnMoviePipelineFinishedImpl params{};
    ProcessEvent(func, &params);
}
void UMoviePipeline::Shutdown(bool bError) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipeline.Shutdown"));
    struct Params_Shutdown {
        bool bError; // 0x0
    }; // Size: 0x1
    Params_Shutdown params{};
    params.bError = (bool)bError;
    ProcessEvent(func, &params);
}
void UMoviePipeline::RequestShutdown(bool bIsError) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipeline.RequestShutdown"));
    struct Params_RequestShutdown {
        bool bIsError; // 0x0
    }; // Size: 0x1
    Params_RequestShutdown params{};
    params.bIsError = (bool)bIsError;
    ProcessEvent(func, &params);
}
bool UMoviePipeline::IsShutdownRequested() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested"));
    struct Params_IsShutdownRequested {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsShutdownRequested params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMoviePipelineMasterConfig* UMoviePipeline::GetPipelineMasterConfig() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig"));
    struct Params_GetPipelineMasterConfig {
        UMoviePipelineMasterConfig* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPipelineMasterConfig params{};
    ProcessEvent(func, &params);
    return (UMoviePipelineMasterConfig*)params.ReturnValue;
}
UTexture* UMoviePipeline::GetPreviewTexture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture"));
    struct Params_GetPreviewTexture {
        UTexture* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPreviewTexture params{};
    ProcessEvent(func, &params);
    return (UTexture*)params.ReturnValue;
}
