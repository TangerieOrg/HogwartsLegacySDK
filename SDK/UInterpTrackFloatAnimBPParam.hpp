#pragma once
#include <cstdint>
#include "UInterpTrackFloatBase.hpp"
class UAnimBlueprintGeneratedClass;
class UClass;
#pragma pack(push, 1)
class UInterpTrackFloatAnimBPParam : public UInterpTrackFloatBase {
public:
    UAnimBlueprintGeneratedClass* AnimBlueprintClass; // 0x90
    UClass* AnimClass; // 0x98
    FName ParamName; // 0xa0
    char pad_a8[0x8];
    static UInterpTrackFloatAnimBPParam* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
