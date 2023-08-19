#pragma once
#include <cstdint>
class UStaticMesh;
#pragma pack(push, 1)
struct FBoneSwarmGenerationParameters {
    int32_t Members; // 0x0
    char pad_4[0x4];
    UStaticMesh* MemberMesh; // 0x8
}; // Size: 0x10
#pragma pack(pop)
