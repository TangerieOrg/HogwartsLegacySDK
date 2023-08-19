#pragma once
#include <cstdint>
#include "EMontageNotifyTickType\Type.hpp"
#include "ENotifyFilterType\Type.hpp"
#include "FAnimLinkableElement.hpp"
class UAnimNotify;
class UAnimNotifyState;
#pragma pack(push, 1)
struct FAnimNotifyEvent : public FAnimLinkableElement {
    float DisplayTime; // 0x30
    float TriggerTimeOffset; // 0x34
    float EndTriggerTimeOffset; // 0x38
    float TriggerWeightThreshold; // 0x3c
    FName NotifyName; // 0x40
    UAnimNotify* Notify; // 0x48
    UAnimNotifyState* NotifyStateClass; // 0x50
    float Duration; // 0x58
    char pad_5c[0x4];
    FAnimLinkableElement EndLink; // 0x60
    bool bConvertedFromBranchingPoint; // 0x90
    EMontageNotifyTickType::Type MontageTickType; // 0x91
    char pad_92[0x2];
    float NotifyTriggerChance; // 0x94
    ENotifyFilterType::Type NotifyFilterType; // 0x98
    char pad_99[0x3];
    int32_t NotifyFilterLOD; // 0x9c
    bool bTriggerOnDedicatedServer; // 0xa0
    bool bTriggerOnFollower; // 0xa1
    char pad_a2[0x2];
    int32_t TrackIndex; // 0xa4
    char pad_a8[0x10];
}; // Size: 0xb8
#pragma pack(pop)
