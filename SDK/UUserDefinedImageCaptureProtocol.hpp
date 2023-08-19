#pragma once
#include <cstdint>
#include "EDesiredImageFormat.hpp"
#include "UUserDefinedCaptureProtocol.hpp"
struct FCapturedPixels;
struct FCapturedPixelsID;
class UTexture;
struct FFrameMetrics;
#pragma pack(push, 1)
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol {
public:
    EDesiredImageFormat Format; // 0xd8
    bool bEnableCompression; // 0xd9
    char pad_da[0x2];
    int32_t CompressionQuality; // 0xdc
    static UUserDefinedImageCaptureProtocol* StaticClass();
    void WriteImageToDisk(FCapturedPixels& PixelData, FCapturedPixelsID& streamId, FFrameMetrics& FrameMetrics, bool bCopyImageData);
    FString GenerateFilenameForCurrentFrame();
    FString GenerateFilenameForBuffer(UTexture* Buffer, FCapturedPixelsID& streamId);
}; // Size: 0xe0
#pragma pack(pop)
