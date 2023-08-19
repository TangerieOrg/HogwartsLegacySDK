#pragma once
#include <cstdint>
#include "EConversationTransformType.hpp"
#include "UTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_Conversation : public UTransformProvider {
public:
    EConversationTransformType TransformType; // 0x28
    char pad_29[0x7];
    static UTransform_Conversation* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
