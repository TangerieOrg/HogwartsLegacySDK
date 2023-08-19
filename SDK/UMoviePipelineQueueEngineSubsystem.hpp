#pragma once
#include <cstdint>
#include "UEngineSubsystem.hpp"
class UMoviePipelineExecutorBase;
class UMoviePipelineQueue;
class UClass;
#pragma pack(push, 1)
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem {
public:
    UMoviePipelineExecutorBase* ActiveExecutor; // 0x30
    UMoviePipelineQueue* CurrentQueue; // 0x38
    static UMoviePipelineQueueEngineSubsystem* StaticClass();
    void RenderQueueWithExecutorInstance(UMoviePipelineExecutorBase* InExecutor);
    UMoviePipelineExecutorBase* RenderQueueWithExecutor(UClass* InExecutorType);
    bool IsRendering();
    UMoviePipelineQueue* GetQueue();
    UMoviePipelineExecutorBase* GetActiveExecutor();
}; // Size: 0x40
#pragma pack(pop)
