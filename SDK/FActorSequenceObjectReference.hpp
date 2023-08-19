#pragma once
#include <cstdint>
#include "EActorSequenceObjectReferenceType.hpp"
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FActorSequenceObjectReference {
    EActorSequenceObjectReferenceType Type; // 0x0
    char pad_1[0x3];
    FGuid ActorId; // 0x4
    char pad_14[0x4];
    FString PathToComponent; // 0x18
}; // Size: 0x28
#pragma pack(pop)
