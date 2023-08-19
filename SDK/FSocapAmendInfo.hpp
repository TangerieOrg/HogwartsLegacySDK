#pragma once
#include <cstdint>
#include "SocialActionTypes.hpp"
#include "SocialCapitalChangeReasons.hpp"
#include "SocialSemanticIDs.hpp"
class AActor;
#pragma pack(push, 1)
struct FSocapAmendInfo {
    AActor* MyActor; // 0x0
    FString MyActorName; // 0x8
    FName MyActorSubtype; // 0x18
    int32_t Delta; // 0x20
    SocialActionTypes Action; // 0x24
    SocialCapitalChangeReasons Reason; // 0x25
    SocialSemanticIDs Semantic; // 0x26
    char pad_27[0x1];
    int32_t StatusNameHint; // 0x28
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
