#pragma once
#include <cstdint>
#include "UObject.hpp"
class UInterpGroup;
class UInterpCurveEdSetup;
class UInterpGroupDirector;
#pragma pack(push, 1)
class UInterpData : public UObject {
public:
    float InterpLength; // 0x28
    float PathBuildTime; // 0x2c
    TArray<UInterpGroup*> InterpGroups; // 0x30
    UInterpCurveEdSetup* CurveEdSetup; // 0x40
    float EdSectionStart; // 0x48
    float EdSectionEnd; // 0x4c
    uint8_t bShouldBakeAndPrune : 1; // 0x50
    uint8_t pad_bitfield_50_1 : 7;
    char pad_51[0x7];
    UInterpGroupDirector* CachedDirectorGroup; // 0x58
    TArray<FName> AllEventNames; // 0x60
    static UInterpData* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
