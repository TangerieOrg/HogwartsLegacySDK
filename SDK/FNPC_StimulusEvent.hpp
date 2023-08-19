#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FNPC_StimulusEvent {
    char pad_0[0x28];
    AActor* Broadcaster; // 0x28
    AActor* Enemy; // 0x30
}; // Size: 0x38
#pragma pack(pop)
