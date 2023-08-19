#pragma once
#include <cstdint>
#include "UAnimationClipProvider.hpp"
#pragma pack(push, 1)
class UAnimationIndexedClipProvider : public UAnimationClipProvider {
public:
    char pad_28[0x8];
    static UAnimationIndexedClipProvider* StaticClass();
    void SetIndex(int32_t Value);
    int32_t GetIndex();
}; // Size: 0x30
#pragma pack(pop)
