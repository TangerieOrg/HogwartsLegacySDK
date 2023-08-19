#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMoviePipelineExecutorShot.hpp"
#include "UMoviePipelineShotConfig.hpp"
#include "UObject.hpp"
float UMoviePipelineExecutorShot::GetStatusProgress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress"));
    struct Params_GetStatusProgress {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetStatusProgress params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UMoviePipelineExecutorShot* UMoviePipelineExecutorShot::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot");
    return (UMoviePipelineExecutorShot*)res;
}
void UMoviePipelineExecutorShot::SetShotOverridePresetOrigin(UMoviePipelineShotConfig* InPreset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin"));
    struct Params_SetShotOverridePresetOrigin {
        UMoviePipelineShotConfig* InPreset; // 0x0
    }; // Size: 0x8
    Params_SetShotOverridePresetOrigin params{};
    params.InPreset = (UMoviePipelineShotConfig*)InPreset;
    ProcessEvent(func, &params);
}
bool UMoviePipelineExecutorShot::ShouldRender() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender"));
    struct Params_ShouldRender {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ShouldRender params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMoviePipelineExecutorShot::SetStatusProgress(float InProgress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress"));
    struct Params_SetStatusProgress {
        float InProgress; // 0x0
    }; // Size: 0x4
    Params_SetStatusProgress params{};
    params.InProgress = (float)InProgress;
    ProcessEvent(func, &params);
}
void UMoviePipelineExecutorShot::SetStatusMessage(FString InStatus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage"));
    struct Params_SetStatusMessage {
        FString InStatus; // 0x0
    }; // Size: 0x10
    Params_SetStatusMessage params{};
    params.InStatus = (FString)InStatus;
    ProcessEvent(func, &params);
}
void UMoviePipelineExecutorShot::SetShotOverrideConfiguration(UMoviePipelineShotConfig* InPreset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration"));
    struct Params_SetShotOverrideConfiguration {
        UMoviePipelineShotConfig* InPreset; // 0x0
    }; // Size: 0x8
    Params_SetShotOverrideConfiguration params{};
    params.InPreset = (UMoviePipelineShotConfig*)InPreset;
    ProcessEvent(func, &params);
}
FString UMoviePipelineExecutorShot::GetStatusMessage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage"));
    struct Params_GetStatusMessage {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetStatusMessage params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
UMoviePipelineShotConfig* UMoviePipelineExecutorShot::GetShotOverridePresetOrigin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin"));
    struct Params_GetShotOverridePresetOrigin {
        UMoviePipelineShotConfig* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetShotOverridePresetOrigin params{};
    ProcessEvent(func, &params);
    return (UMoviePipelineShotConfig*)params.ReturnValue;
}
UMoviePipelineShotConfig* UMoviePipelineExecutorShot::GetShotOverrideConfiguration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration"));
    struct Params_GetShotOverrideConfiguration {
        UMoviePipelineShotConfig* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetShotOverrideConfiguration params{};
    ProcessEvent(func, &params);
    return (UMoviePipelineShotConfig*)params.ReturnValue;
}
UMoviePipelineShotConfig* UMoviePipelineExecutorShot::AllocateNewShotOverrideConfig(UClass* InConfigType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig"));
    struct Params_AllocateNewShotOverrideConfig {
        UClass* InConfigType; // 0x0
        UMoviePipelineShotConfig* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AllocateNewShotOverrideConfig params{};
    params.InConfigType = (UClass*)InConfigType;
    ProcessEvent(func, &params);
    return (UMoviePipelineShotConfig*)params.ReturnValue;
}
