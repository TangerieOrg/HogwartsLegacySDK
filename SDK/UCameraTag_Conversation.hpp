#pragma once
#include <cstdint>
#include "UAnimationArchitectTagProvider.hpp"
#pragma pack(push, 1)
class UCameraTag_Conversation : public UAnimationArchitectTagProvider {
public:
    char pad_28[0x18];
    static UCameraTag_Conversation* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
