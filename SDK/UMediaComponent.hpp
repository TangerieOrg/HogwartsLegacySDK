#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UMediaTexture;
class UMediaPlayer;
#pragma pack(push, 1)
class UMediaComponent : public UActorComponent {
public:
    UMediaTexture* MediaTexture; // 0xc8
    UMediaPlayer* MediaPlayer; // 0xd0
    static UMediaComponent* StaticClass();
    UMediaTexture* GetMediaTexture();
    UMediaPlayer* GetMediaPlayer();
}; // Size: 0xd8
#pragma pack(pop)
