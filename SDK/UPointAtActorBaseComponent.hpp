#pragma once
#include <cstdint>
#include "FOrientToSlerp.hpp"
#include "FVector.hpp"
#include "UPointAtComponent.hpp"
#pragma pack(push, 1)
class UPointAtActorBaseComponent : public UPointAtComponent {
public:
    FName Socket; // 0x220
    FVector LocalOffset; // 0x228
    bool bIncludeScale; // 0x234
    char pad_235[0x3];
    FOrientToSlerp Smoothing; // 0x238
    char pad_244[0xc];
    static UPointAtActorBaseComponent* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
