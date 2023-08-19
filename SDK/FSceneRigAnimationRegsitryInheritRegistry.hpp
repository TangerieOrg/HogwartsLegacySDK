#pragma once
#include <cstdint>
class USceneRigAnimationRegistry;
#pragma pack(push, 1)
struct FSceneRigAnimationRegsitryInheritRegistry {
    FString LookupKey; // 0x0
    USceneRigAnimationRegistry* InheritFromRegistry; // 0x10
}; // Size: 0x18
#pragma pack(pop)
