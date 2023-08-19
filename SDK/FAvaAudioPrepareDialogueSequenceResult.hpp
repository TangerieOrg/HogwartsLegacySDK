#pragma once
#include <cstdint>
#include "FAvaAudioDialogueMetaData.hpp"
class AActor;
#pragma pack(push, 1)
struct FAvaAudioPrepareDialogueSequenceResult {
    char pad_0[0x50];
    FAvaAudioDialogueMetaData MetaData; // 0x50
    AActor* LineActor; // 0xb8
    FName LineActorID; // 0xc0
}; // Size: 0xc8
#pragma pack(pop)
