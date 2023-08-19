#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMoviePipelineExecutorBase.hpp"
#include "UMoviePipelinePythonHostExecutor.hpp"
#include "UMoviePipelineQueue.hpp"
#include "UWorld.hpp"
UMoviePipelinePythonHostExecutor* UMoviePipelinePythonHostExecutor::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor");
    return (UMoviePipelinePythonHostExecutor*)res;
}
void UMoviePipelinePythonHostExecutor::OnMapLoad(UWorld* InWorld) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad"));
    struct Params_OnMapLoad {
        UWorld* InWorld; // 0x0
    }; // Size: 0x8
    Params_OnMapLoad params{};
    params.InWorld = (UWorld*)InWorld;
    ProcessEvent(func, &params);
}
void UMoviePipelinePythonHostExecutor::ExecuteDelayed(UMoviePipelineQueue* InPipelineQueue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed"));
    struct Params_ExecuteDelayed {
        UMoviePipelineQueue* InPipelineQueue; // 0x0
    }; // Size: 0x8
    Params_ExecuteDelayed params{};
    params.InPipelineQueue = (UMoviePipelineQueue*)InPipelineQueue;
    ProcessEvent(func, &params);
}
UWorld* UMoviePipelinePythonHostExecutor::GetLastLoadedWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld"));
    struct Params_GetLastLoadedWorld {
        UWorld* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLastLoadedWorld params{};
    ProcessEvent(func, &params);
    return (UWorld*)params.ReturnValue;
}
