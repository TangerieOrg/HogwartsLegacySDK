#pragma once
#include <cstdint>
class USkinnedMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
struct FSimpleBoneInfo {
    char pad_0[0xb0];
    USkinnedMeshComponent* BoneComponent; // 0xb0
    USceneComponent* NameNoneComponent; // 0xb8
    char pad_c0[0x10];
}; // Size: 0xd0
#pragma pack(pop)
