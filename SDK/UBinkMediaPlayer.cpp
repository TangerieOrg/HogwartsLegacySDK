#include "EBinkMediaPlayerBinkBufferModes.hpp"
#include "EBinkMediaPlayerBinkDrawStyle.hpp"
#include "EBinkMediaPlayerBinkSoundTrack.hpp"
#include "FTimespan.hpp"
#include "FVector2D.hpp"
#include "UBinkMediaPlayer.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTexture.hpp"
UBinkMediaPlayer* UBinkMediaPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/BinkMediaPlayer.BinkMediaPlayer");
    return (UBinkMediaPlayer*)res;
}
bool UBinkMediaPlayer::SupportsSeeking() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking"));
    struct Params_SupportsSeeking {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_SupportsSeeking params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBinkMediaPlayer::SupportsScrubbing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing"));
    struct Params_SupportsScrubbing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_SupportsScrubbing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBinkMediaPlayer::SupportsRate(float Rate, bool Unthinned) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.SupportsRate"));
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
void UBinkMediaPlayer::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
void UBinkMediaPlayer::SetVolume(float Rate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.SetVolume"));
    struct Params_SetVolume {
        float Rate; // 0x0
    }; // Size: 0x4
    Params_SetVolume params{};
    params.Rate = (float)Rate;
    ProcessEvent(func, &params);
}
bool UBinkMediaPlayer::SetRate(float Rate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.SetRate"));
    struct Params_SetRate {
        float Rate; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_SetRate params{};
    params.Rate = (float)Rate;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBinkMediaPlayer::Pause() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.Pause"));
    struct Params_Pause {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Pause params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBinkMediaPlayer::SetLooping(bool InLooping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.SetLooping"));
    struct Params_SetLooping {
        bool InLooping; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetLooping params{};
    params.InLooping = (bool)InLooping;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBinkMediaPlayer::Seek(FTimespan& InTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.Seek"));
    struct Params_Seek {
        FTimespan InTime; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Seek params{};
    params.InTime = (FTimespan)InTime;
    ProcessEvent(func, &params);
    InTime = params.InTime;
    return (bool)params.ReturnValue;
}
bool UBinkMediaPlayer::Rewind() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.Rewind"));
    struct Params_Rewind {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Rewind params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UBinkMediaPlayer::GetUrl() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetUrl"));
    struct Params_GetUrl {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetUrl params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UBinkMediaPlayer::IsPlaying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsPlaying"));
    struct Params_IsPlaying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlaying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBinkMediaPlayer::Play() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.Play"));
    struct Params_Play {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Play params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBinkMediaPlayer::CanPause() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.CanPause"));
    struct Params_CanPause {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanPause params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBinkMediaPlayer::OpenUrl(FString NewUrl) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.OpenUrl"));
    struct Params_OpenUrl {
        FString NewUrl; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_OpenUrl params{};
    params.NewUrl = (FString)NewUrl;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBinkMediaPlayer::IsStopped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsStopped"));
    struct Params_IsStopped {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStopped params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBinkMediaPlayer::IsPaused() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsPaused"));
    struct Params_IsPaused {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPaused params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBinkMediaPlayer::IsLooping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsLooping"));
    struct Params_IsLooping {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLooping params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBinkMediaPlayer::IsInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.IsInitialized"));
    struct Params_IsInitialized {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInitialized params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTimespan UBinkMediaPlayer::GetTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetTime"));
    struct Params_GetTime {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTime params{};
    ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
float UBinkMediaPlayer::GetRate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetRate"));
    struct Params_GetRate {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRate params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FTimespan UBinkMediaPlayer::GetDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.GetDuration"));
    struct Params_GetDuration {
        FTimespan ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDuration params{};
    ProcessEvent(func, &params);
    return (FTimespan)params.ReturnValue;
}
void UBinkMediaPlayer::Draw(UTexture* Texture, bool ToneMap, int32_t out_nits, float Alpha, bool srgb_decode, bool HDR) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.Draw"));
    struct Params_Draw {
        UTexture* Texture; // 0x0
        bool ToneMap; // 0x8
        char pad_9[0x3];
        int32_t out_nits; // 0xc
        float Alpha; // 0x10
        bool srgb_decode; // 0x14
        bool HDR; // 0x15
    }; // Size: 0x16
    Params_Draw params{};
    params.Texture = (UTexture*)Texture;
    params.ToneMap = (bool)ToneMap;
    params.out_nits = (int32_t)out_nits;
    params.Alpha = (float)Alpha;
    params.srgb_decode = (bool)srgb_decode;
    params.HDR = (bool)HDR;
    ProcessEvent(func, &params);
}
void UBinkMediaPlayer::CloseUrl() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.CloseUrl"));
    struct Params_CloseUrl {
    }; // Size: 0x0
    Params_CloseUrl params{};
    ProcessEvent(func, &params);
}
bool UBinkMediaPlayer::CanPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaPlayer.CanPlay"));
    struct Params_CanPlay {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanPlay params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
