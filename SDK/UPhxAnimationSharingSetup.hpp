#pragma once
#include <cstdint>
#include "EFacialAnimType.hpp"
#include "UAnimationSharingSetup.hpp"
#pragma pack(push, 1)
class UPhxAnimationSharingSetup : public UAnimationSharingSetup {
public:
    EFacialAnimType FacialAnimationOverride; // 0x48
    char pad_49[0x7];
    static UPhxAnimationSharingSetup* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
