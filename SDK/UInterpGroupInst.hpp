#pragma once
#include <cstdint>
#include "UObject.hpp"
class UInterpGroup;
class UInterpTrackInst;
class AActor;
#pragma pack(push, 1)
class UInterpGroupInst : public UObject {
public:
    UInterpGroup* Group; // 0x28
    AActor* GroupActor; // 0x30
    TArray<UInterpTrackInst*> TrackInst; // 0x38
    static UInterpGroupInst* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
