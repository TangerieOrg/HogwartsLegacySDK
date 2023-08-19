#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "UObject.hpp"
class UInterpTrack;
#pragma pack(push, 1)
class UInterpGroup : public UObject {
public:
    char pad_28[0x8];
    TArray<UInterpTrack*> InterpTracks; // 0x30
    FName GroupName; // 0x40
    FColor GroupColor; // 0x48
    uint8_t bCollapsed : 1; // 0x4c
    uint8_t bVisible : 1; // 0x4c
    uint8_t bIsFolder : 1; // 0x4c
    uint8_t bIsParented : 1; // 0x4c
    uint8_t bIsSelected : 1; // 0x4c
    uint8_t pad_bitfield_4c_5 : 3;
    char pad_4d[0x3];
    static UInterpGroup* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
