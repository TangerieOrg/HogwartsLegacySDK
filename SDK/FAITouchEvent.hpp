#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FAITouchEvent {
    char pad_0[0x10];
    AActor* TouchReceiver; // 0x10
    AActor* OtherActor; // 0x18
}; // Size: 0x20
#pragma pack(pop)
