#include "EPixelFormat.hpp"
#include "TextureAddress.hpp"
#include "UBinkMediaPlayer.hpp"
#include "UBinkMediaTexture.hpp"
#include "UFunction.hpp"
#include "UTexture.hpp"
UBinkMediaTexture* UBinkMediaTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/BinkMediaPlayer.BinkMediaTexture");
    return (UBinkMediaTexture*)res;
}
void UBinkMediaTexture::SetMediaPlayer(UBinkMediaPlayer* InMediaPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer"));
    struct Params_SetMediaPlayer {
        UBinkMediaPlayer* InMediaPlayer; // 0x0
    }; // Size: 0x8
    Params_SetMediaPlayer params{};
    params.InMediaPlayer = (UBinkMediaPlayer*)InMediaPlayer;
    ProcessEvent(func, &params);
}
void UBinkMediaTexture::Clear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BinkMediaPlayer.BinkMediaTexture.Clear"));
    struct Params_Clear {
    }; // Size: 0x0
    Params_Clear params{};
    ProcessEvent(func, &params);
}
