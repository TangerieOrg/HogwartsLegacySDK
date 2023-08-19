#pragma once
#include <cstdint>
#include "FActorSequenceObjectReferences.hpp"
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FActorSequenceObjectReferenceMap {
    TArray<FGuid> BindingIds; // 0x0
    TArray<FActorSequenceObjectReferences> References; // 0x10
}; // Size: 0x20
#pragma pack(pop)
