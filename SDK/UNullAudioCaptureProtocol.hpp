#pragma once
#include <cstdint>
#include "UMovieSceneAudioCaptureProtocolBase.hpp"
#pragma pack(push, 1)
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase {
public:
    static UNullAudioCaptureProtocol* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
