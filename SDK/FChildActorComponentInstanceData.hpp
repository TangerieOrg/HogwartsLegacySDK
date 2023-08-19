#pragma once
#include <cstdint>
#include "FChildActorAttachedActorInfo.hpp"
#include "FSceneComponentInstanceData.hpp"
class UClass;
#pragma pack(push, 1)
struct FChildActorComponentInstanceData : public FSceneComponentInstanceData {
    UClass* ChildActorClass; // 0xb8
    FName ChildActorName; // 0xc0
    TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xc8
    char pad_d8[0x10];
}; // Size: 0xe8
#pragma pack(pop)
