#pragma once
#include <cstdint>
#include "UObject.hpp"
class UClass;
class UMoviePipeline;
class UMoviePipelineQueue;
#pragma pack(push, 1)
class UMoviePipelineExecutorBase : public UObject {
public:
    char pad_28[0x78];
    UClass* DebugWidgetClass; // 0xa0
    FString UserData; // 0xa8
    UClass* TargetPipelineClass; // 0xb8
    char pad_c0[0x48];
    static UMoviePipelineExecutorBase* StaticClass();
    void SetStatusProgress(float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetMoviePipelineClass(UClass* InPipelineClass);
    bool SendSocketMessage(FString InMessage);
    void SendHTTPRequest(FString InURL, FString InVerb, FString InMessage);
    void OnExecutorFinishedImpl();
    void OnExecutorErroredImpl(UMoviePipeline* ErroredPipeline, bool bFatal);
    void OnBeginFrame();
    bool IsSocketConnected();
    bool IsRendering();
    float GetStatusProgress();
    FString GetStatusMessage();
    void Execute(UMoviePipelineQueue* InPipelineQueue);
    void DisconnectSocket();
    bool ConnectSocket(FString InHostName, int32_t InPort);
    void CancelCurrentJob();
    void CancelAllJobs();
}; // Size: 0x108
#pragma pack(pop)
