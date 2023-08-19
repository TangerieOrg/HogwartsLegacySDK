#pragma once
#include <cstdint>
#include "FNavSlideInfo.hpp"
#include "FSelectableSubobjectName.hpp"
#include "FVector.hpp"
#include "UOdcNavLinkComponent.hpp"
#pragma pack(push, 1)
class USlideNavLinkComponent : public UOdcNavLinkComponent {
public:
    bool bIsBottomLinkPosValid; // 0x280
    char pad_281[0x3];
    FVector SlideBottomLinkEnd; // 0x284
    bool bIsTopLinkPosValid; // 0x290
    char pad_291[0x3];
    FVector SlideTopLinkEnd; // 0x294
    FSelectableSubobjectName StartLinkComponentName; // 0x2a0
    FSelectableSubobjectName EndLinkComponentName; // 0x2a8
    FNavSlideInfo SlideInfo; // 0x2b0
    char pad_2c8[0x8];
    static USlideNavLinkComponent* StaticClass();
    void UpdateNavLink(FNavSlideInfo& Info);
    void RegisterNavLink();
    bool HasValidLinks();
}; // Size: 0x2d0
#pragma pack(pop)
