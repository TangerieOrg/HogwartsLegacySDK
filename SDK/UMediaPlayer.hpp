#pragma once
#include <cstdint>
#include "EMediaPlayerTrack.hpp"
#include "FFloatRange.hpp"
#include "FGuid.hpp"
#include "FIntPoint.hpp"
#include "FLatentActionInfo.hpp"
#include "FRotator.hpp"
#include "FTimespan.hpp"
#include "UObject.hpp"
class UMediaPlaylist;
class UMediaSource;
struct FMediaPlayerOptions;
class UMediaTimeStampInfo;
#pragma pack(push, 1)
class UMediaPlayer : public UObject {
public:
    char pad_28[0x80];
    FTimespan CacheAhead; // 0xa8
    FTimespan CacheBehind; // 0xb0
    FTimespan CacheBehindGame; // 0xb8
    bool NativeAudioOut; // 0xc0
    bool PlayOnOpen; // 0xc1
    char pad_c2[0x2];
    uint8_t Shuffle : 1; // 0xc4
    uint8_t Loop : 1; // 0xc4
    uint8_t pad_bitfield_c4_2 : 6;
    char pad_c5[0x3];
    UMediaPlaylist* Playlist; // 0xc8
    int32_t PlaylistIndex; // 0xd0
    char pad_d4[0x4];
    FTimespan TimeDelay; // 0xd8
    float HorizontalFieldOfView; // 0xe0
    float VerticalFieldOfView; // 0xe4
    FRotator ViewRotation; // 0xe8
    char pad_f4[0x2c];
    FGuid PlayerGuid; // 0x120
    char pad_130[0x8];
    static UMediaPlayer* StaticClass();
    bool SupportsSeeking();
    bool SupportsScrubbing();
    bool SupportsRate(float Rate, bool Unthinned);
    bool SetViewRotation(FRotator& Rotation, bool Absolute);
    bool SetViewField(float Horizontal, float Vertical, bool Absolute);
    bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);
    bool SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);
    void SetTimeDelay(FTimespan TimeDelay);
    bool SetRate(float Rate);
    bool SetNativeVolume(float Volume);
    void SetMediaOptions(UMediaSource* OPTIONS);
    bool SetLooping(bool Looping);
    void SetDesiredPlayerName(FName PlayerName);
    void SetBlockOnTime(FTimespan& Time);
    bool SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex);
    bool Seek(FTimespan& Time);
    bool Rewind();
    bool Reopen();
    bool Previous();
    void PlayAndSeek();
    bool Play();
    bool Pause();
    bool OpenUrl(FString URL);
    bool OpenSourceWithOptions(UMediaSource* MediaSource, FMediaPlayerOptions& OPTIONS);
    void OpenSourceLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UMediaSource* MediaSource, FMediaPlayerOptions& OPTIONS, bool& bSuccess);
    bool OpenSource(UMediaSource* MediaSource);
    bool OpenPlaylistIndex(UMediaPlaylist* InPlaylist, int32_t Index);
    bool OpenPlaylist(UMediaPlaylist* InPlaylist);
    bool OpenFile(FString FilePath);
    bool Next();
    bool IsReady();
    bool IsPreparing();
    bool IsPlaying();
    bool IsPaused();
    bool IsLooping();
    bool IsConnecting();
    bool IsClosed();
    bool IsBuffering();
    bool HasError();
    FRotator GetViewRotation();
    FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);
    FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);
    float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);
    FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);
    float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);
    float GetVerticalFieldOfView();
    FString GetUrl();
    FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex);
    int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex);
    void GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex);
    UMediaTimeStampInfo* GetTimeStamp();
    FTimespan GetTimeDelay();
    FTimespan GetTime();
    void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned);
    int32_t GetSelectedTrack(EMediaPlayerTrack TrackType);
    float GetRate();
    int32_t GetPlaylistIndex();
    UMediaPlaylist* GetPlaylist();
    FName GetPlayerName();
    int32_t GetNumTracks(EMediaPlayerTrack TrackType);
    int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex);
    void GetMediaName();
    float GetHorizontalFieldOfView();
    FTimespan GetDuration();
    FName GetDesiredPlayerName();
    FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);
    int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);
    int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);
    void Close();
    bool CanPlayUrl(FString URL);
    bool CanPlaySource(UMediaSource* MediaSource);
    bool CanPause();
}; // Size: 0x138
#pragma pack(pop)
