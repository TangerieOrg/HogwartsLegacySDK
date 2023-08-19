#include "FLinearColor.hpp"
#include "MediaTextureOrientation.hpp"
#include "MediaTextureOutputFormat.hpp"
#include "TextureAddress.hpp"
#include "UFunction.hpp"
#include "UMediaPlayer.hpp"
#include "UMediaTexture.hpp"
#include "UTexture.hpp"
void UMediaTexture::SetMediaPlayer(UMediaPlayer* NewMediaPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaTexture.SetMediaPlayer"));
    struct Params_SetMediaPlayer {
        UMediaPlayer* NewMediaPlayer; // 0x0
    }; // Size: 0x8
    Params_SetMediaPlayer params{};
    params.NewMediaPlayer = (UMediaPlayer*)NewMediaPlayer;
    ProcessEvent(func, &params);
}
UMediaTexture* UMediaTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaAssets.MediaTexture");
    return (UMediaTexture*)res;
}
float UMediaTexture::GetAspectRatio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaTexture.GetAspectRatio"));
    struct Params_GetAspectRatio {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAspectRatio params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UMediaTexture::GetWidth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaTexture.GetWidth"));
    struct Params_GetWidth {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetWidth params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UMediaTexture::GetTextureNumMips() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaTexture.GetTextureNumMips"));
    struct Params_GetTextureNumMips {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTextureNumMips params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UMediaPlayer* UMediaTexture::GetMediaPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaTexture.GetMediaPlayer"));
    struct Params_GetMediaPlayer {
        UMediaPlayer* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMediaPlayer params{};
    ProcessEvent(func, &params);
    return (UMediaPlayer*)params.ReturnValue;
}
int32_t UMediaTexture::GetHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaTexture.GetHeight"));
    struct Params_GetHeight {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHeight params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
