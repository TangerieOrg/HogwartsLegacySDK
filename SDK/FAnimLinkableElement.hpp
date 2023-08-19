#pragma once
#include <cstdint>
#include "EAnimLinkMethod\Type.hpp"
class UAnimMontage;
class UAnimSequenceBase;
#pragma pack(push, 1)
struct FAnimLinkableElement {
    char pad_0[0x8];
    UAnimMontage* LinkedMontage; // 0x8
    int32_t SlotIndex; // 0x10
    int32_t SegmentIndex; // 0x14
    EAnimLinkMethod::Type LinkMethod; // 0x18
    EAnimLinkMethod::Type CachedLinkMethod; // 0x19
    char pad_1a[0x2];
    float SegmentBeginTime; // 0x1c
    float SegmentLength; // 0x20
    float LinkValue; // 0x24
    UAnimSequenceBase* LinkedSequence; // 0x28
}; // Size: 0x30
#pragma pack(pop)
