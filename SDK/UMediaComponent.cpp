#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMediaComponent.hpp"
#include "UMediaPlayer.hpp"
#include "UMediaTexture.hpp"
UMediaComponent* UMediaComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/MediaAssets.MediaComponent");
    return (UMediaComponent*)res;
}
UMediaTexture* UMediaComponent::GetMediaTexture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaComponent.GetMediaTexture"));
    struct Params_GetMediaTexture {
        UMediaTexture* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMediaTexture params{};
    ProcessEvent(func, &params);
    return (UMediaTexture*)params.ReturnValue;
}
UMediaPlayer* UMediaComponent::GetMediaPlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MediaAssets.MediaComponent.GetMediaPlayer"));
    struct Params_GetMediaPlayer {
        UMediaPlayer* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMediaPlayer params{};
    ProcessEvent(func, &params);
    return (UMediaPlayer*)params.ReturnValue;
}
