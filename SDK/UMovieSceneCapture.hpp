#pragma once
#include <cstdint>
#include "FMovieSceneCaptureSettings.hpp"
#include "FSoftClassPath.hpp"
#include "UObject.hpp"
class UMovieSceneImageCaptureProtocolBase;
class UMovieSceneAudioCaptureProtocolBase;
class UClass;
class UMovieSceneCaptureProtocolBase;
#pragma pack(push, 1)
class UMovieSceneCapture : public UObject {
public:
    char pad_28[0x10];
    FSoftClassPath ImageCaptureProtocolType; // 0x38
    FSoftClassPath AudioCaptureProtocolType; // 0x50
    UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x68
    UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x70
    FMovieSceneCaptureSettings Settings; // 0x78
    bool bUseSeparateProcess; // 0xe8
    bool bCloseEditorWhenCaptureStarts; // 0xe9
    char pad_ea[0x6];
    FString AdditionalCommandLineArguments; // 0xf0
    FString InheritedCommandLineArguments; // 0x100
    char pad_110[0x120];
    static UMovieSceneCapture* StaticClass();
    void SetImageCaptureProtocolType(UClass* ProtocolType);
    void SetAudioCaptureProtocolType(UClass* ProtocolType);
    UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
    UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
}; // Size: 0x230
#pragma pack(pop)
