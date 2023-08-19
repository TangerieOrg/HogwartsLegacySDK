#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMoviePipelineExecutorJob;
class UClass;
#pragma pack(push, 1)
class UMoviePipelineQueue : public UObject {
public:
    TArray<UMoviePipelineExecutorJob*> Jobs; // 0x28
    char pad_38[0x8];
    static UMoviePipelineQueue* StaticClass();
    TArray<UMoviePipelineExecutorJob*> GetJobs();
    UMoviePipelineExecutorJob* DuplicateJob(UMoviePipelineExecutorJob* InJob);
    void DeleteJob(UMoviePipelineExecutorJob* InJob);
    void CopyFrom(UMoviePipelineQueue* InQueue);
    UMoviePipelineExecutorJob* AllocateNewJob(UClass* InJobType);
}; // Size: 0x40
#pragma pack(pop)
