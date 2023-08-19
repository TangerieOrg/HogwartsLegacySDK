#include "FSoftObjectPath.hpp"
#include "UFunction.hpp"
#include "UMoviePipelineExecutorJob.hpp"
#include "UMoviePipelineExecutorShot.hpp"
#include "UMoviePipelineMasterConfig.hpp"
#include "UObject.hpp"
UMoviePipelineExecutorJob* UMoviePipelineExecutorJob::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob");
    return (UMoviePipelineExecutorJob*)res;
}
void UMoviePipelineExecutorJob::SetPresetOrigin(UMoviePipelineMasterConfig* InPreset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin"));
    struct Params_SetPresetOrigin {
        UMoviePipelineMasterConfig* InPreset; // 0x0
    }; // Size: 0x8
    Params_SetPresetOrigin params{};
    params.InPreset = (UMoviePipelineMasterConfig*)InPreset;
    ProcessEvent(func, &params);
}
void UMoviePipelineExecutorJob::SetStatusProgress(float InProgress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress"));
    struct Params_SetStatusProgress {
        float InProgress; // 0x0
    }; // Size: 0x4
    Params_SetStatusProgress params{};
    params.InProgress = (float)InProgress;
    ProcessEvent(func, &params);
}
void UMoviePipelineExecutorJob::SetStatusMessage(FString InStatus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage"));
    struct Params_SetStatusMessage {
        FString InStatus; // 0x0
    }; // Size: 0x10
    Params_SetStatusMessage params{};
    params.InStatus = (FString)InStatus;
    ProcessEvent(func, &params);
}
void UMoviePipelineExecutorJob::SetSequence(FSoftObjectPath InSequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence"));
    struct Params_SetSequence {
        FSoftObjectPath InSequence; // 0x0
    }; // Size: 0x18
    Params_SetSequence params{};
    params.InSequence = (FSoftObjectPath)InSequence;
    ProcessEvent(func, &params);
}
void UMoviePipelineExecutorJob::SetConsumed(bool bInConsumed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed"));
    struct Params_SetConsumed {
        bool bInConsumed; // 0x0
    }; // Size: 0x1
    Params_SetConsumed params{};
    params.bInConsumed = (bool)bInConsumed;
    ProcessEvent(func, &params);
}
void UMoviePipelineExecutorJob::OnDuplicated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated"));
    struct Params_OnDuplicated {
    }; // Size: 0x0
    Params_OnDuplicated params{};
    ProcessEvent(func, &params);
}
void UMoviePipelineExecutorJob::SetConfiguration(UMoviePipelineMasterConfig* InPreset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration"));
    struct Params_SetConfiguration {
        UMoviePipelineMasterConfig* InPreset; // 0x0
    }; // Size: 0x8
    Params_SetConfiguration params{};
    params.InPreset = (UMoviePipelineMasterConfig*)InPreset;
    ProcessEvent(func, &params);
}
bool UMoviePipelineExecutorJob::IsConsumed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed"));
    struct Params_IsConsumed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsConsumed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UMoviePipelineExecutorJob::GetStatusProgress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress"));
    struct Params_GetStatusProgress {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetStatusProgress params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FString UMoviePipelineExecutorJob::GetStatusMessage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage"));
    struct Params_GetStatusMessage {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetStatusMessage params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
UMoviePipelineMasterConfig* UMoviePipelineExecutorJob::GetPresetOrigin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin"));
    struct Params_GetPresetOrigin {
        UMoviePipelineMasterConfig* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPresetOrigin params{};
    ProcessEvent(func, &params);
    return (UMoviePipelineMasterConfig*)params.ReturnValue;
}
UMoviePipelineMasterConfig* UMoviePipelineExecutorJob::GetConfiguration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration"));
    struct Params_GetConfiguration {
        UMoviePipelineMasterConfig* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetConfiguration params{};
    ProcessEvent(func, &params);
    return (UMoviePipelineMasterConfig*)params.ReturnValue;
}
