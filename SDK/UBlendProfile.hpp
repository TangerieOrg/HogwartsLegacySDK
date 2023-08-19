#pragma once
#include <cstdint>
#include "FBlendProfileBoneEntry.hpp"
#include "UObject.hpp"
class USkeleton;
#pragma pack(push, 1)
class UBlendProfile : public UObject {
public:
    char pad_28[0x8];
    USkeleton* OwningSkeleton; // 0x30
    TArray<FBlendProfileBoneEntry> ProfileEntries; // 0x38
    static UBlendProfile* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
