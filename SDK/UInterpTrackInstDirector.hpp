#pragma once
#include <cstdint>
#include "UInterpTrackInst.hpp"
class AActor;
#pragma pack(push, 1)
class UInterpTrackInstDirector : public UInterpTrackInst {
public:
    AActor* OldViewTarget; // 0x28
    static UInterpTrackInstDirector* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
