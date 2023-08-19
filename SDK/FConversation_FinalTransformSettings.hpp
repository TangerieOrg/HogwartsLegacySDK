#pragma once
#include <cstdint>
class UConversationPreset_FinalTransform;
#pragma pack(push, 1)
struct FConversation_FinalTransformSettings {
    UConversationPreset_FinalTransform* TransformType; // 0x0
    bool CheckGroundCollision; // 0x8
    bool CheckNavMesh; // 0x9
    char pad_a[0x6];
}; // Size: 0x10
#pragma pack(pop)
