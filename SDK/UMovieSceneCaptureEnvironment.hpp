#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMovieSceneImageCaptureProtocolBase;
class UMovieSceneAudioCaptureProtocolBase;
#pragma pack(push, 1)
class UMovieSceneCaptureEnvironment : public UObject {
public:
    static UMovieSceneCaptureEnvironment* StaticClass();
    static bool IsCaptureInProgress();
    static int32_t GetCaptureFrameNumber();
    static float GetCaptureElapsedTime();
    static UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();
    static UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();
}; // Size: 0x28
#pragma pack(pop)
