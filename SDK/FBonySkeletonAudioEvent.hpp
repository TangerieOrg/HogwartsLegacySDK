#pragma once
#include <cstdint>
#include "FBonySkeletonTimer.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
struct FBonySkeletonAudioEvent {
    FBonySkeletonTimer Timer; // 0x0
    UAkAudioEvent* Event; // 0x8
}; // Size: 0x10
#pragma pack(pop)
