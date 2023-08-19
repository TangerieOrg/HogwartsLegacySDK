#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class USkeletalMesh;
class UAkAudioEvent;
class UAnimSequence;
#pragma pack(push, 1)
class UShadowProjection : public UDataAsset {
public:
    USkeletalMesh* SkeletalMesh; // 0x30
    UAnimSequence* Animation; // 0x38
    UAkAudioEvent* AudioEvent; // 0x40
    static UShadowProjection* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
