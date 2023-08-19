#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UImgMediaPlaybackComponent : public UActorComponent {
public:
    float Width; // 0xc8
    float LODBias; // 0xcc
    char pad_d0[0x20];
    static UImgMediaPlaybackComponent* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
