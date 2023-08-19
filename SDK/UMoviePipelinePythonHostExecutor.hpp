#pragma once
#include <cstdint>
#include "UMoviePipelineExecutorBase.hpp"
class UClass;
class UMoviePipelineQueue;
class UWorld;
#pragma pack(push, 1)
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase {
public:
    UClass* ExecutorClass; // 0x108
    UMoviePipelineQueue* PipelineQueue; // 0x110
    UWorld* LastLoadedWorld; // 0x118
    static UMoviePipelinePythonHostExecutor* StaticClass();
    void OnMapLoad(UWorld* InWorld);
    UWorld* GetLastLoadedWorld();
    void ExecuteDelayed(UMoviePipelineQueue* InPipelineQueue);
}; // Size: 0x120
#pragma pack(pop)
