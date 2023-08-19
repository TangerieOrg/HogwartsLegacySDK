#pragma once
#include <cstdint>
#include "EMovieSceneCaptureProtocolState.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMovieSceneCaptureProtocolBase : public UObject {
public:
    char pad_28[0x28];
    EMovieSceneCaptureProtocolState State; // 0x50
    char pad_51[0x7];
    static UMovieSceneCaptureProtocolBase* StaticClass();
    bool IsCapturing();
    EMovieSceneCaptureProtocolState GetState();
}; // Size: 0x58
#pragma pack(pop)
