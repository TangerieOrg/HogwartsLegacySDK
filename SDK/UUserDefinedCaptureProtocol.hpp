#pragma once
#include <cstdint>
#include "FFrameMetrics.hpp"
#include "UMovieSceneImageCaptureProtocolBase.hpp"
class UWorld;
struct FCapturedPixelsID;
class UTexture;
struct FCapturedPixels;
#pragma pack(push, 1)
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {
public:
    UWorld* World; // 0x58
    char pad_60[0x78];
    static UUserDefinedCaptureProtocol* StaticClass();
    void StopCapturingFinalPixels();
    void StartCapturingFinalPixels(FCapturedPixelsID& streamId);
    void ResolveBuffer(UTexture* Buffer, FCapturedPixelsID& BufferID);
    void OnWarmUp();
    void OnTick();
    void OnStartCapture();
    bool OnSetup();
    void OnPreTick();
    void OnPixelsReceived(FCapturedPixels& Pixels, FCapturedPixelsID& ID, FFrameMetrics FrameMetrics);
    void OnPauseCapture();
    void OnFinalize();
    void OnCaptureFrame();
    bool OnCanFinalize();
    void OnBeginFinalize();
    FFrameMetrics GetCurrentFrameMetrics();
    FString GenerateFilename(FFrameMetrics& InFrameMetrics);
}; // Size: 0xd8
#pragma pack(pop)
