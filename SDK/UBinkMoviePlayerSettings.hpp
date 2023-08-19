#pragma once
#include <cstdint>
#include "EBinkMoviePlayerBinkBufferModes.hpp"
#include "EBinkMoviePlayerBinkSoundTrack.hpp"
#include "EPixelFormat.hpp"
#include "FVector2D.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UBinkMoviePlayerSettings : public UObject {
public:
    EBinkMoviePlayerBinkBufferModes BinkBufferMode; // 0x28
    EBinkMoviePlayerBinkSoundTrack BinkSoundTrack; // 0x29
    char pad_2a[0x2];
    int32_t BinkSoundTrackStart; // 0x2c
    FVector2D BinkDestinationUpperLeft; // 0x30
    FVector2D BinkDestinationLowerRight; // 0x38
    EPixelFormat BinkPixelFormat; // 0x40
    char pad_41[0x7];
    static UBinkMoviePlayerSettings* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
