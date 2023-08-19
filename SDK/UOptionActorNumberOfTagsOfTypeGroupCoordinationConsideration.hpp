#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorNumberOfTagsOfTypeGroupCoordinationConsideration : public UQualifierConsideration {
public:
    FName TagID; // 0x28
    int32_t MaxNumberOfTags; // 0x30
    bool bIgnoreSelf; // 0x34
    char pad_35[0x3];
    static UOptionActorNumberOfTagsOfTypeGroupCoordinationConsideration* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
