#include "EDesiredImageFormat.hpp"
#include "FCapturedPixels.hpp"
#include "FCapturedPixelsID.hpp"
#include "FFrameMetrics.hpp"
#include "UFunction.hpp"
#include "UTexture.hpp"
#include "UUserDefinedCaptureProtocol.hpp"
#include "UUserDefinedImageCaptureProtocol.hpp"
UUserDefinedImageCaptureProtocol* UUserDefinedImageCaptureProtocol::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol");
    return (UUserDefinedImageCaptureProtocol*)res;
}
void UUserDefinedImageCaptureProtocol::WriteImageToDisk(FCapturedPixels& PixelData, FCapturedPixelsID& streamId, FFrameMetrics& FrameMetrics, bool bCopyImageData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk"));
    struct Params_WriteImageToDisk {
        FCapturedPixels PixelData; // 0x0
        FCapturedPixelsID streamId; // 0x10
        FFrameMetrics FrameMetrics; // 0x60
        bool bCopyImageData; // 0x70
    }; // Size: 0x71
    Params_WriteImageToDisk params{};
    params.PixelData = (FCapturedPixels)PixelData;
    params.streamId = (FCapturedPixelsID)streamId;
    params.FrameMetrics = (FFrameMetrics)FrameMetrics;
    params.bCopyImageData = (bool)bCopyImageData;
    ProcessEvent(func, &params);
    PixelData = params.PixelData;
    streamId = params.streamId;
    FrameMetrics = params.FrameMetrics;
}
FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame"));
    struct Params_GenerateFilenameForCurrentFrame {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GenerateFilenameForCurrentFrame params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(UTexture* Buffer, FCapturedPixelsID& streamId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer"));
    struct Params_GenerateFilenameForBuffer {
        UTexture* Buffer; // 0x0
        FCapturedPixelsID streamId; // 0x8
        FString ReturnValue; // 0x58
    }; // Size: 0x68
    Params_GenerateFilenameForBuffer params{};
    params.Buffer = (UTexture*)Buffer;
    params.streamId = (FCapturedPixelsID)streamId;
    ProcessEvent(func, &params);
    streamId = params.streamId;
    return (FString)params.ReturnValue;
}
