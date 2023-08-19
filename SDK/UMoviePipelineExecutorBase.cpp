#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMoviePipeline.hpp"
#include "UMoviePipelineExecutorBase.hpp"
#include "UMoviePipelineQueue.hpp"
#include "UObject.hpp"
UMoviePipelineExecutorBase* UMoviePipelineExecutorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase");
    return (UMoviePipelineExecutorBase*)res;
}
void UMoviePipelineExecutorBase::OnExecutorErroredImpl(UMoviePipeline* ErroredPipeline, bool bFatal) {}
void UMoviePipelineExecutorBase::SetStatusProgress(float InProgress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress"));
    struct Params_SetStatusProgress {
        float InProgress; // 0x0
    }; // Size: 0x4
    Params_SetStatusProgress params{};
    params.InProgress = (float)InProgress;
    ProcessEvent(func, &params);
}
void UMoviePipelineExecutorBase::SetMoviePipelineClass(UClass* InPipelineClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass"));
    struct Params_SetMoviePipelineClass {
        UClass* InPipelineClass; // 0x0
    }; // Size: 0x8
    Params_SetMoviePipelineClass params{};
    params.InPipelineClass = (UClass*)InPipelineClass;
    ProcessEvent(func, &params);
}
void UMoviePipelineExecutorBase::SetStatusMessage(FString InStatus) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage"));
    struct Params_SetStatusMessage {
        FString InStatus; // 0x0
    }; // Size: 0x10
    Params_SetStatusMessage params{};
    params.InStatus = (FString)InStatus;
    ProcessEvent(func, &params);
}
bool UMoviePipelineExecutorBase::SendSocketMessage(FString InMessage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage"));
    struct Params_SendSocketMessage {
        FString InMessage; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SendSocketMessage params{};
    params.InMessage = (FString)InMessage;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMoviePipelineExecutorBase::SendHTTPRequest(FString InURL, FString InVerb, FString InMessage) {}
void UMoviePipelineExecutorBase::OnExecutorFinishedImpl() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl"));
    struct Params_OnExecutorFinishedImpl {
    }; // Size: 0x0
    Params_OnExecutorFinishedImpl params{};
    ProcessEvent(func, &params);
}
void UMoviePipelineExecutorBase::OnBeginFrame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame"));
    struct Params_OnBeginFrame {
    }; // Size: 0x0
    Params_OnBeginFrame params{};
    ProcessEvent(func, &params);
}
bool UMoviePipelineExecutorBase::IsSocketConnected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected"));
    struct Params_IsSocketConnected {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSocketConnected params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMoviePipelineExecutorBase::IsRendering() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering"));
    struct Params_IsRendering {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRendering params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UMoviePipelineExecutorBase::GetStatusProgress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress"));
    struct Params_GetStatusProgress {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetStatusProgress params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FString UMoviePipelineExecutorBase::GetStatusMessage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage"));
    struct Params_GetStatusMessage {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetStatusMessage params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UMoviePipelineExecutorBase::Execute(UMoviePipelineQueue* InPipelineQueue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute"));
    struct Params_Execute {
        UMoviePipelineQueue* InPipelineQueue; // 0x0
    }; // Size: 0x8
    Params_Execute params{};
    params.InPipelineQueue = (UMoviePipelineQueue*)InPipelineQueue;
    ProcessEvent(func, &params);
}
void UMoviePipelineExecutorBase::DisconnectSocket() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket"));
    struct Params_DisconnectSocket {
    }; // Size: 0x0
    Params_DisconnectSocket params{};
    ProcessEvent(func, &params);
}
bool UMoviePipelineExecutorBase::ConnectSocket(FString InHostName, int32_t InPort) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket"));
    struct Params_ConnectSocket {
        FString InHostName; // 0x0
        int32_t InPort; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_ConnectSocket params{};
    params.InHostName = (FString)InHostName;
    params.InPort = (int32_t)InPort;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMoviePipelineExecutorBase::CancelCurrentJob() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob"));
    struct Params_CancelCurrentJob {
    }; // Size: 0x0
    Params_CancelCurrentJob params{};
    ProcessEvent(func, &params);
}
void UMoviePipelineExecutorBase::CancelAllJobs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs"));
    struct Params_CancelAllJobs {
    }; // Size: 0x0
    Params_CancelAllJobs params{};
    ProcessEvent(func, &params);
}
