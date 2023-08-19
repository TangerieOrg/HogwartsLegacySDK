#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMoviePipelineExecutorJob.hpp"
#include "UMoviePipelineQueue.hpp"
#include "UObject.hpp"
UMoviePipelineQueue* UMoviePipelineQueue::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineQueue");
    return (UMoviePipelineQueue*)res;
}
void UMoviePipelineQueue::DeleteJob(UMoviePipelineExecutorJob* InJob) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob"));
    struct Params_DeleteJob {
        UMoviePipelineExecutorJob* InJob; // 0x0
    }; // Size: 0x8
    Params_DeleteJob params{};
    params.InJob = (UMoviePipelineExecutorJob*)InJob;
    ProcessEvent(func, &params);
}
TArray<UMoviePipelineExecutorJob*> UMoviePipelineQueue::GetJobs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.GetJobs"));
    struct Params_GetJobs {
        TArray<UMoviePipelineExecutorJob*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetJobs params{};
    ProcessEvent(func, &params);
    return (TArray<UMoviePipelineExecutorJob*>)params.ReturnValue;
}
UMoviePipelineExecutorJob* UMoviePipelineQueue::DuplicateJob(UMoviePipelineExecutorJob* InJob) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob"));
    struct Params_DuplicateJob {
        UMoviePipelineExecutorJob* InJob; // 0x0
        UMoviePipelineExecutorJob* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_DuplicateJob params{};
    params.InJob = (UMoviePipelineExecutorJob*)InJob;
    ProcessEvent(func, &params);
    return (UMoviePipelineExecutorJob*)params.ReturnValue;
}
void UMoviePipelineQueue::CopyFrom(UMoviePipelineQueue* InQueue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom"));
    struct Params_CopyFrom {
        UMoviePipelineQueue* InQueue; // 0x0
    }; // Size: 0x8
    Params_CopyFrom params{};
    params.InQueue = (UMoviePipelineQueue*)InQueue;
    ProcessEvent(func, &params);
}
UMoviePipelineExecutorJob* UMoviePipelineQueue::AllocateNewJob(UClass* InJobType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob"));
    struct Params_AllocateNewJob {
        UClass* InJobType; // 0x0
        UMoviePipelineExecutorJob* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AllocateNewJob params{};
    params.InJobType = (UClass*)InJobType;
    ProcessEvent(func, &params);
    return (UMoviePipelineExecutorJob*)params.ReturnValue;
}
