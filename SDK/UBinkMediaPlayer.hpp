#pragma once
#include <cstdint>
#include "EBinkMediaPlayerBinkBufferModes.hpp"
#include "EBinkMediaPlayerBinkDrawStyle.hpp"
#include "EBinkMediaPlayerBinkSoundTrack.hpp"
#include "FTimespan.hpp"
#include "FVector2D.hpp"
#include "UObject.hpp"
class UTexture;
#pragma pack(push, 1)
class UBinkMediaPlayer : public UObject {
public:
    char pad_28[0x58];
    uint8_t Looping : 1; // 0x80
    uint8_t StartImmediately : 1; // 0x80
    uint8_t DelayedOpen : 1; // 0x80
    uint8_t pad_bitfield_80_3 : 5;
    char pad_81[0x3];
    FVector2D BinkDestinationUpperLeft; // 0x84
    FVector2D BinkDestinationLowerRight; // 0x8c
    char pad_94[0x4];
    FString URL; // 0x98
    EBinkMediaPlayerBinkBufferModes BinkBufferMode; // 0xa8
    EBinkMediaPlayerBinkSoundTrack BinkSoundTrack; // 0xa9
    char pad_aa[0x2];
    int32_t BinkSoundTrackStart; // 0xac
    EBinkMediaPlayerBinkDrawStyle BinkDrawStyle; // 0xb0
    char pad_b1[0x3];
    int32_t BinkLayerDepth; // 0xb4
    char pad_b8[0x50];
    static UBinkMediaPlayer* StaticClass();
    bool SupportsSeeking();
    bool SupportsScrubbing();
    bool SupportsRate(float Rate, bool Unthinned);
    void Stop();
    void SetVolume(float Rate);
    bool SetRate(float Rate);
    bool SetLooping(bool InLooping);
    bool Seek(FTimespan& InTime);
    bool Rewind();
    bool Play();
    bool Pause();
    bool OpenUrl(FString NewUrl);
    bool IsStopped();
    bool IsPlaying();
    bool IsPaused();
    bool IsLooping();
    bool IsInitialized();
    FString GetUrl();
    FTimespan GetTime();
    float GetRate();
    FTimespan GetDuration();
    void Draw(UTexture* Texture, bool ToneMap, int32_t out_nits, float Alpha, bool srgb_decode, bool HDR);
    void CloseUrl();
    bool CanPlay();
    bool CanPause();
}; // Size: 0x108
#pragma pack(pop)
