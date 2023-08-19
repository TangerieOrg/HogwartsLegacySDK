#include "UClass.hpp"
#include "UEngineSubsystem.hpp"
#include "UFunction.hpp"
#include "UMoviePipelineExecutorBase.hpp"
#include "UMoviePipelineQueue.hpp"
#include "UMoviePipelineQueueEngineSubsystem.hpp"
UMoviePipelineQueueEngineSubsystem* UMoviePipelineQueueEngineSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem");
    return (UMoviePipelineQueueEngineSubsystem*)res;
}
void UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutorInstance(UMoviePipelineExecutorBase* InExecutor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance"));
    struct Params_RenderQueueWithExecutorInstance {
        UMoviePipelineExecutorBase* InExecutor; // 0x0
    }; // Size: 0x8
    Params_RenderQueueWithExecutorInstance params{};
    params.InExecutor = (UMoviePipelineExecutorBase*)InExecutor;
    ProcessEvent(func, &params);
}
UMoviePipelineExecutorBase* UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutor(UClass* InExecutorType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor"));
    struct Params_RenderQueueWithExecutor {
        UClass* InExecutorType; // 0x0
        UMoviePipelineExecutorBase* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_RenderQueueWithExecutor params{};
    params.InExecutorType = (UClass*)InExecutorType;
    ProcessEvent(func, &params);
    return (UMoviePipelineExecutorBase*)params.ReturnValue;
}
bool UMoviePipelineQueueEngineSubsystem::IsRendering() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering"));
    struct Params_IsRendering {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRendering params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMoviePipelineQueue* UMoviePipelineQueueEngineSubsystem::GetQueue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue"));
    struct Params_GetQueue {
        UMoviePipelineQueue* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetQueue params{};
    ProcessEvent(func, &params);
    return (UMoviePipelineQueue*)params.ReturnValue;
}
UMoviePipelineExecutorBase* UMoviePipelineQueueEngineSubsystem::GetActiveExecutor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor"));
    struct Params_GetActiveExecutor {
        UMoviePipelineExecutorBase* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveExecutor params{};
    ProcessEvent(func, &params);
    return (UMoviePipelineExecutorBase*)params.ReturnValue;
}
