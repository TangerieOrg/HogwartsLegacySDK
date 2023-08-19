#pragma once
#include <cstdint>
#include "UMovieSceneImageCaptureProtocolBase.hpp"
#pragma pack(push, 1)
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase {
public:
    char pad_58[0x10];
    static UFrameGrabberProtocol* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
