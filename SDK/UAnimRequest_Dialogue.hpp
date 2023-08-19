#pragma once
#include <cstdint>
#include "FAnimationTrack.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAnimRequest_Dialogue : public UObject {
public:
    char pad_28[0x18];
    FAnimationTrack FacialDialogueMouthOnlyTrack; // 0x40
    FAnimationTrack FacialDialogueFaceOnlyTrack; // 0x210
    FAnimationTrack FacialDialogueHeadOnlyTrack; // 0x3e0
    char pad_5b0[0x40];
    static UAnimRequest_Dialogue* StaticClass();
}; // Size: 0x5f0
#pragma pack(pop)
