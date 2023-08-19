#include "FCapturedPixels.hpp"
#include "FCapturedPixelsID.hpp"
#include "FFrameMetrics.hpp"
#include "UFunction.hpp"
#include "UMovieSceneImageCaptureProtocolBase.hpp"
#include "UTexture.hpp"
#include "UUserDefinedCaptureProtocol.hpp"
#include "UWorld.hpp"
void UUserDefinedCaptureProtocol::OnStartCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture"));
    struct Params_OnStartCapture {
    }; // Size: 0x0
    Params_OnStartCapture params{};
    ProcessEvent(func, &params);
}
UUserDefinedCaptureProtocol* UUserDefinedCaptureProtocol::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.UserDefinedCaptureProtocol");
    return (UUserDefinedCaptureProtocol*)res;
}
void UUserDefinedCaptureProtocol::OnWarmUp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp"));
    struct Params_OnWarmUp {
    }; // Size: 0x0
    Params_OnWarmUp params{};
    ProcessEvent(func, &params);
}
void UUserDefinedCaptureProtocol::StopCapturingFinalPixels() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels"));
    struct Params_StopCapturingFinalPixels {
    }; // Size: 0x0
    Params_StopCapturingFinalPixels params{};
    ProcessEvent(func, &params);
}
FString UUserDefinedCaptureProtocol::GenerateFilename(FFrameMetrics& InFrameMetrics) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename"));
    struct Params_GenerateFilename {
        FFrameMetrics InFrameMetrics; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GenerateFilename params{};
    params.InFrameMetrics = (FFrameMetrics)InFrameMetrics;
    ProcessEvent(func, &params);
    InFrameMetrics = params.InFrameMetrics;
    return (FString)params.ReturnValue;
}
void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(FCapturedPixelsID& streamId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels"));
    struct Params_StartCapturingFinalPixels {
        FCapturedPixelsID streamId; // 0x0
    }; // Size: 0x50
    Params_StartCapturingFinalPixels params{};
    params.streamId = (FCapturedPixelsID)streamId;
    ProcessEvent(func, &params);
    streamId = params.streamId;
}
void UUserDefinedCaptureProtocol::ResolveBuffer(UTexture* Buffer, FCapturedPixelsID& BufferID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer"));
    struct Params_ResolveBuffer {
        UTexture* Buffer; // 0x0
        FCapturedPixelsID BufferID; // 0x8
    }; // Size: 0x58
    Params_ResolveBuffer params{};
    params.Buffer = (UTexture*)Buffer;
    params.BufferID = (FCapturedPixelsID)BufferID;
    ProcessEvent(func, &params);
    BufferID = params.BufferID;
}
void UUserDefinedCaptureProtocol::OnPauseCapture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture"));
    struct Params_OnPauseCapture {
    }; // Size: 0x0
    Params_OnPauseCapture params{};
    ProcessEvent(func, &params);
}
void UUserDefinedCaptureProtocol::OnTick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnTick"));
    struct Params_OnTick {
    }; // Size: 0x0
    Params_OnTick params{};
    ProcessEvent(func, &params);
}
bool UUserDefinedCaptureProtocol::OnSetup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup"));
    struct Params_OnSetup {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_OnSetup params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUserDefinedCaptureProtocol::OnPreTick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick"));
    struct Params_OnPreTick {
    }; // Size: 0x0
    Params_OnPreTick params{};
    ProcessEvent(func, &params);
}
void UUserDefinedCaptureProtocol::OnPixelsReceived(FCapturedPixels& Pixels, FCapturedPixelsID& ID, FFrameMetrics FrameMetrics) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived"));
    struct Params_OnPixelsReceived {
        FCapturedPixels Pixels; // 0x0
        FCapturedPixelsID ID; // 0x10
        FFrameMetrics FrameMetrics; // 0x60
    }; // Size: 0x70
    Params_OnPixelsReceived params{};
    params.Pixels = (FCapturedPixels)Pixels;
    params.ID = (FCapturedPixelsID)ID;
    params.FrameMetrics = (FFrameMetrics)FrameMetrics;
    ProcessEvent(func, &params);
    Pixels = params.Pixels;
    ID = params.ID;
}
void UUserDefinedCaptureProtocol::OnFinalize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize"));
    struct Params_OnFinalize {
    }; // Size: 0x0
    Params_OnFinalize params{};
    ProcessEvent(func, &params);
}
void UUserDefinedCaptureProtocol::OnCaptureFrame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame"));
    struct Params_OnCaptureFrame {
    }; // Size: 0x0
    Params_OnCaptureFrame params{};
    ProcessEvent(func, &params);
}
bool UUserDefinedCaptureProtocol::OnCanFinalize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize"));
    struct Params_OnCanFinalize {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_OnCanFinalize params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUserDefinedCaptureProtocol::OnBeginFinalize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize"));
    struct Params_OnBeginFinalize {
    }; // Size: 0x0
    Params_OnBeginFinalize params{};
    ProcessEvent(func, &params);
}
FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics"));
    struct Params_GetCurrentFrameMetrics {
        FFrameMetrics ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCurrentFrameMetrics params{};
    ProcessEvent(func, &params);
    return (FFrameMetrics)params.ReturnValue;
}
