#pragma once
#include <cstdint>
#include "UMovieSceneAudioCaptureProtocolBase.hpp"
#pragma pack(push, 1)
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase {
public:
    FString Filename; // 0x58
    char pad_68[0x28];
    static UMasterAudioSubmixCaptureProtocol* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
