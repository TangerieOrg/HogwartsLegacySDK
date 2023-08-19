#include "EMediaPlayerTrack.hpp"
#include "FFloatRange.hpp"
#include "FGuid.hpp"
#include "FIntPoint.hpp"
#include "FLatentActionInfo.hpp"
#include "FMediaPlayerOptions.hpp"
#include "FRotator.hpp"
#include "FTimespan.hpp"
#include "UFunction.hpp"
#include "UMediaPlayer.hpp"
#include "UMediaPlaylist.hpp"
#include "UMediaSource.hpp"
#include "UMediaTimeStampInfo.hpp"
#include "UObject.hpp"
bool UMediaPlayer::SetViewRotation(FRotator& Rotation, bool Absolute) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.SetViewRotation"));
    struct Params_SetViewRotation {
        FRotator Rotation; // 0x0
        bool Absolute; // 0xc
        bool ReturnValue; // 0xd
    }; // Size: 0xe
    Params_SetViewRotation params{};
    params.Rotation = (FRotator)Rotation;
    params.Absolute = (bool)Absolute;
    ProcessEvent(func, &params);
    Rotation = params.Rotation;
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::IsLooping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.IsLooping"));
    struct Params_IsLooping {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLooping params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMediaPlayer* UMediaPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaAssets.MediaPlayer");
    return (UMediaPlayer*)res;
}
bool UMediaPlayer::IsConnecting() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.IsConnecting"));
    struct Params_IsConnecting {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsConnecting params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::SupportsSeeking() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.SupportsSeeking"));
    struct Params_SupportsSeeking {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_SupportsSeeking params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.SupportsRate"));
    struct Params_SupportsRate {
        float Rate; // 0x0
        bool Unthinned; // 0x4
        bool ReturnValue; // 0x5
    }; // Size: 0x6
    Params_SupportsRate params{};
    params.Rate = (float)Rate;
    params.Unthinned = (bool)Unthinned;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::SupportsScrubbing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.SupportsScrubbing"));
    struct Params_SupportsScrubbing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_SupportsScrubbing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::SetRate(float Rate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.SetRate"));
    struct Params_SetRate {
        float Rate; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_SetRate params{};
    params.Rate = (float)Rate;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UMediaPlayer::GetHorizontalFieldOfView() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetHorizontalFieldOfView"));
    struct Params_GetHorizontalFieldOfView {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHorizontalFieldOfView params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.SetViewField"));
    struct Params_SetViewField {
        float Horizontal; // 0x0
        float Vertical; // 0x4
        bool Absolute; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_SetViewField params{};
    params.Horizontal = (float)Horizontal;
    params.Vertical = (float)Vertical;
    params.Absolute = (bool)Absolute;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::OpenFile(FString FilePath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.OpenFile"));
    struct Params_OpenFile {
        FString FilePath; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_OpenFile params{};
    params.FilePath = (FString)FilePath;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.SetVideoTrackFrameRate"));
    struct Params_SetVideoTrackFrameRate {
        int32_t TrackIndex; // 0x0
        int32_t FormatIndex; // 0x4
        float FrameRate; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_SetVideoTrackFrameRate params{};
    params.TrackIndex = (int32_t)TrackIndex;
    params.FormatIndex = (int32_t)FormatIndex;
    params.FrameRate = (float)FrameRate;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.SetTrackFormat"));
    struct Params_SetTrackFormat {
        EMediaPlayerTrack TrackType; // 0x0
        char pad_1[0x3];
        int32_t TrackIndex; // 0x4
        int32_t FormatIndex; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_SetTrackFormat params{};
    params.TrackType = (EMediaPlayerTrack)TrackType;
    params.TrackIndex = (int32_t)TrackIndex;
    params.FormatIndex = (int32_t)FormatIndex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMediaPlayer::SetTimeDelay(FTimespan TimeDelay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.SetTimeDelay"));
    struct Params_SetTimeDelay {
        FTimespan TimeDelay; // 0x0
    }; // Size: 0x8
    Params_SetTimeDelay params{};
    params.TimeDelay = (FTimespan)TimeDelay;
    ProcessEvent(func, &params);
}
bool UMediaPlayer::SetNativeVolume(float Volume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.SetNativeVolume"));
    struct Params_SetNativeVolume {
        float Volume; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_SetNativeVolume params{};
    params.Volume = (float)Volume;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::OpenSourceWithOptions(UMediaSource* MediaSource, FMediaPlayerOptions& OPTIONS) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.OpenSourceWithOptions"));
    struct Params_OpenSourceWithOptions {
        UMediaSource* MediaSource; // 0x0
        FMediaPlayerOptions OPTIONS; // 0x8
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_OpenSourceWithOptions params{};
    params.MediaSource = (UMediaSource*)MediaSource;
    params.OPTIONS = (FMediaPlayerOptions)OPTIONS;
    ProcessEvent(func, &params);
    OPTIONS = params.OPTIONS;
    return (bool)params.ReturnValue;
}
FIntPoint UMediaPlayer::GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetVideoTrackDimensions"));
    struct Params_GetVideoTrackDimensions {
        int32_t TrackIndex; // 0x0
        int32_t FormatIndex; // 0x4
        FIntPoint ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetVideoTrackDimensions params{};
    params.TrackIndex = (int32_t)TrackIndex;
    params.FormatIndex = (int32_t)FormatIndex;
    ProcessEvent(func, &params);
    return (FIntPoint)params.ReturnValue;
}
void UMediaPlayer::SetMediaOptions(UMediaSource* OPTIONS) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.SetMediaOptions"));
    struct Params_SetMediaOptions {
        UMediaSource* OPTIONS; // 0x0
    }; // Size: 0x8
    Params_SetMediaOptions params{};
    params.OPTIONS = (UMediaSource*)OPTIONS;
    ProcessEvent(func, &params);
}
FRotator UMediaPlayer::GetViewRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetViewRotation"));
    struct Params_GetViewRotation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetViewRotation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
bool UMediaPlayer::SetLooping(bool Looping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.SetLooping"));
    struct Params_SetLooping {
        bool Looping; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetLooping params{};
    params.Looping = (bool)Looping;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::Next() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.Next"));
    struct Params_Next {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Next params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMediaPlayer::SetDesiredPlayerName(FName PlayerName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.SetDesiredPlayerName"));
    struct Params_SetDesiredPlayerName {
        FName PlayerName; // 0x0
    }; // Size: 0x8
    Params_SetDesiredPlayerName params{};
    params.PlayerName = (FName)PlayerName;
    ProcessEvent(func, &params);
}
void UMediaPlayer::SetBlockOnTime(FTimespan& Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.SetBlockOnTime"));
    struct Params_SetBlockOnTime {
        FTimespan Time; // 0x0
    }; // Size: 0x8
    Params_SetBlockOnTime params{};
    params.Time = (FTimespan)Time;
    ProcessEvent(func, &params);
    Time = params.Time;
}
bool UMediaPlayer::SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.SelectTrack"));
    struct Params_SelectTrack {
        EMediaPlayerTrack TrackType; // 0x0
        char pad_1[0x3];
        int32_t TrackIndex; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SelectTrack params{};
    params.TrackType = (EMediaPlayerTrack)TrackType;
    params.TrackIndex = (int32_t)TrackIndex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::Seek(FTimespan& Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.Seek"));
    struct Params_Seek {
        FTimespan Time; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Seek params{};
    params.Time = (FTimespan)Time;
    ProcessEvent(func, &params);
    Time = params.Time;
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::OpenPlaylist(UMediaPlaylist* InPlaylist) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.OpenPlaylist"));
    struct Params_OpenPlaylist {
        UMediaPlaylist* InPlaylist; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_OpenPlaylist params{};
    params.InPlaylist = (UMediaPlaylist*)InPlaylist;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FFloatRange UMediaPlayer::GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRates"));
    struct Params_GetVideoTrackFrameRates {
        int32_t TrackIndex; // 0x0
        int32_t FormatIndex; // 0x4
        FFloatRange ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetVideoTrackFrameRates params{};
    params.TrackIndex = (int32_t)TrackIndex;
    params.FormatIndex = (int32_t)FormatIndex;
    ProcessEvent(func, &params);
    return (FFloatRange)params.ReturnValue;
}
bool UMediaPlayer::Rewind() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.Rewind"));
    struct Params_Rewind {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Rewind params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::IsPaused() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.IsPaused"));
    struct Params_IsPaused {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPaused params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::Reopen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.Reopen"));
    struct Params_Reopen {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Reopen params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::Previous() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.Previous"));
    struct Params_Previous {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Previous params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMediaPlayer::PlayAndSeek() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.PlayAndSeek"));
    struct Params_PlayAndSeek {
    }; // Size: 0x0
    Params_PlayAndSeek params{};
    ProcessEvent(func, &params);
}
bool UMediaPlayer::Play() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.Play"));
    struct Params_Play {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Play params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UMediaPlayer::GetSelectedTrack(EMediaPlayerTrack TrackType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetSelectedTrack"));
    struct Params_GetSelectedTrack {
        EMediaPlayerTrack TrackType; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetSelectedTrack params{};
    params.TrackType = (EMediaPlayerTrack)TrackType;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UMediaPlayer::GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRate"));
    struct Params_GetVideoTrackFrameRate {
        int32_t TrackIndex; // 0x0
        int32_t FormatIndex; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetVideoTrackFrameRate params{};
    params.TrackIndex = (int32_t)TrackIndex;
    params.FormatIndex = (int32_t)FormatIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UMediaPlayer::IsReady() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.IsReady"));
    struct Params_IsReady {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsReady params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::Pause() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.Pause"));
    struct Params_Pause {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Pause params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::OpenUrl(FString URL) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.OpenUrl"));
    struct Params_OpenUrl {
        FString URL; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_OpenUrl params{};
    params.URL = (FString)URL;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMediaPlayer::OpenSourceLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UMediaSource* MediaSource, FMediaPlayerOptions& OPTIONS, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.OpenSourceLatent"));
    struct Params_OpenSourceLatent {
        UObject* WorldContextObject; // 0x0
        FLatentActionInfo LatentInfo; // 0x8
        UMediaSource* MediaSource; // 0x20
        FMediaPlayerOptions OPTIONS; // 0x28
        bool bSuccess; // 0x58
    }; // Size: 0x59
    Params_OpenSourceLatent params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LatentInfo = (FLatentActionInfo)LatentInfo;
    params.MediaSource = (UMediaSource*)MediaSource;
    params.OPTIONS = (FMediaPlayerOptions)OPTIONS;
    params.bSuccess = (bool)bSuccess;
    ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
    OPTIONS = params.OPTIONS;
}
bool UMediaPlayer::OpenSource(UMediaSource* MediaSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.OpenSource"));
    struct Params_OpenSource {
        UMediaSource* MediaSource; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_OpenSource params{};
    params.MediaSource = (UMediaSource*)MediaSource;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::OpenPlaylistIndex(UMediaPlaylist* InPlaylist, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.OpenPlaylistIndex"));
    struct Params_OpenPlaylistIndex {
        UMediaPlaylist* InPlaylist; // 0x0
        int32_t Index; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_OpenPlaylistIndex params{};
    params.InPlaylist = (UMediaPlaylist*)InPlaylist;
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMediaTimeStampInfo* UMediaPlayer::GetTimeStamp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetTimeStamp"));
    struct Params_GetTimeStamp {
        UMediaTimeStampInfo* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTimeStamp params{};
    ProcessEvent(func, &params);
    return (UMediaTimeStampInfo*)params.ReturnValue;
}
bool UMediaPlayer::IsPreparing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.IsPreparing"));
    struct Params_IsPreparing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPreparing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::IsPlaying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.IsPlaying"));
    struct Params_IsPlaying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlaying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::IsClosed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.IsClosed"));
    struct Params_IsClosed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsClosed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UMediaPlayer::GetPlaylistIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetPlaylistIndex"));
    struct Params_GetPlaylistIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlaylistIndex params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UMediaPlaylist* UMediaPlayer::GetPlaylist() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetPlaylist"));
    struct Params_GetPlaylist {
        UMediaPlaylist* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPlaylist params{};
    ProcessEvent(func, &params);
    return (UMediaPlaylist*)params.ReturnValue;
}
FTimespan UMediaPlayer::GetTimeDelay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetTimeDelay"));
    struct Params_GetTimeDelay {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTimeDelay params{};
    ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
bool UMediaPlayer::IsBuffering() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.IsBuffering"));
    struct Params_IsBuffering {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBuffering params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UMediaPlayer::GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetAudioTrackChannels"));
    struct Params_GetAudioTrackChannels {
        int32_t TrackIndex; // 0x0
        int32_t FormatIndex; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetAudioTrackChannels params{};
    params.TrackIndex = (int32_t)TrackIndex;
    params.FormatIndex = (int32_t)FormatIndex;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UMediaPlayer::HasError() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.HasError"));
    struct Params_HasError {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasError params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UMediaPlayer::GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetVideoTrackType"));
    struct Params_GetVideoTrackType {
        int32_t TrackIndex; // 0x0
        int32_t FormatIndex; // 0x4
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetVideoTrackType params{};
    params.TrackIndex = (int32_t)TrackIndex;
    params.FormatIndex = (int32_t)FormatIndex;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
float UMediaPlayer::GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetVideoTrackAspectRatio"));
    struct Params_GetVideoTrackAspectRatio {
        int32_t TrackIndex; // 0x0
        int32_t FormatIndex; // 0x4
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetVideoTrackAspectRatio params{};
    params.TrackIndex = (int32_t)TrackIndex;
    params.FormatIndex = (int32_t)FormatIndex;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMediaPlayer::GetVerticalFieldOfView() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetVerticalFieldOfView"));
    struct Params_GetVerticalFieldOfView {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetVerticalFieldOfView params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FString UMediaPlayer::GetUrl() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetUrl"));
    struct Params_GetUrl {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetUrl params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UMediaPlayer::GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetTrackLanguage"));
    struct Params_GetTrackLanguage {
        EMediaPlayerTrack TrackType; // 0x0
        char pad_1[0x3];
        int32_t TrackIndex; // 0x4
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetTrackLanguage params{};
    params.TrackType = (EMediaPlayerTrack)TrackType;
    params.TrackIndex = (int32_t)TrackIndex;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UMediaPlayer::CanPause() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.CanPause"));
    struct Params_CanPause {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanPause params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UMediaPlayer::GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetTrackFormat"));
    struct Params_GetTrackFormat {
        EMediaPlayerTrack TrackType; // 0x0
        char pad_1[0x3];
        int32_t TrackIndex; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetTrackFormat params{};
    params.TrackType = (EMediaPlayerTrack)TrackType;
    params.TrackIndex = (int32_t)TrackIndex;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UMediaPlayer::GetMediaName() {}
void UMediaPlayer::GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex) {}
FName UMediaPlayer::GetPlayerName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetPlayerName"));
    struct Params_GetPlayerName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPlayerName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FTimespan UMediaPlayer::GetTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetTime"));
    struct Params_GetTime {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTime params{};
    ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
void UMediaPlayer::GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetSupportedRates"));
    struct Params_GetSupportedRates {
        TArray<FFloatRange> OutRates; // 0x0
        bool Unthinned; // 0x10
    }; // Size: 0x11
    Params_GetSupportedRates params{};
    params.OutRates = (TArray<FFloatRange>)OutRates;
    params.Unthinned = (bool)Unthinned;
    ProcessEvent(func, &params);
    OutRates = params.OutRates;
}
float UMediaPlayer::GetRate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetRate"));
    struct Params_GetRate {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRate params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UMediaPlayer::GetNumTracks(EMediaPlayerTrack TrackType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetNumTracks"));
    struct Params_GetNumTracks {
        EMediaPlayerTrack TrackType; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetNumTracks params{};
    params.TrackType = (EMediaPlayerTrack)TrackType;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UMediaPlayer::GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetNumTrackFormats"));
    struct Params_GetNumTrackFormats {
        EMediaPlayerTrack TrackType; // 0x0
        char pad_1[0x3];
        int32_t TrackIndex; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetNumTrackFormats params{};
    params.TrackType = (EMediaPlayerTrack)TrackType;
    params.TrackIndex = (int32_t)TrackIndex;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FTimespan UMediaPlayer::GetDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetDuration"));
    struct Params_GetDuration {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDuration params{};
    ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
FName UMediaPlayer::GetDesiredPlayerName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetDesiredPlayerName"));
    struct Params_GetDesiredPlayerName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDesiredPlayerName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FString UMediaPlayer::GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetAudioTrackType"));
    struct Params_GetAudioTrackType {
        int32_t TrackIndex; // 0x0
        int32_t FormatIndex; // 0x4
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAudioTrackType params{};
    params.TrackIndex = (int32_t)TrackIndex;
    params.FormatIndex = (int32_t)FormatIndex;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
int32_t UMediaPlayer::GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.GetAudioTrackSampleRate"));
    struct Params_GetAudioTrackSampleRate {
        int32_t TrackIndex; // 0x0
        int32_t FormatIndex; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetAudioTrackSampleRate params{};
    params.TrackIndex = (int32_t)TrackIndex;
    params.FormatIndex = (int32_t)FormatIndex;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UMediaPlayer::Close() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.Close"));
    struct Params_Close {
    }; // Size: 0x0
    Params_Close params{};
    ProcessEvent(func, &params);
}
bool UMediaPlayer::CanPlayUrl(FString URL) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.CanPlayUrl"));
    struct Params_CanPlayUrl {
        FString URL; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CanPlayUrl params{};
    params.URL = (FString)URL;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMediaPlayer::CanPlaySource(UMediaSource* MediaSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaPlayer.CanPlaySource"));
    struct Params_CanPlaySource {
        UMediaSource* MediaSource; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CanPlaySource params{};
    params.MediaSource = (UMediaSource*)MediaSource;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
