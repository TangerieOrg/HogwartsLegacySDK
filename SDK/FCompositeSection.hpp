#pragma once
#include <cstdint>
#include "FAnimLinkableElement.hpp"
class UAnimMetaData;
#pragma pack(push, 1)
struct FCompositeSection : public FAnimLinkableElement {
    FName SectionName; // 0x30
    float StartTime; // 0x38
    FName NextSectionName; // 0x3c
    char pad_44[0x4];
    TArray<UAnimMetaData*> MetaData; // 0x48
}; // Size: 0x58
#pragma pack(pop)
