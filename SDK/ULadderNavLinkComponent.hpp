#pragma once
#include <cstdint>
#include "FOdcLadderInfo.hpp"
#include "FVector.hpp"
#include "UOdcNavLinkComponent.hpp"
#pragma pack(push, 1)
class ULadderNavLinkComponent : public UOdcNavLinkComponent {
public:
    bool bIsBottomLinkPosValid; // 0x280
    char pad_281[0x3];
    FVector LadderBottomLinkEnd; // 0x284
    bool bIsTopLinkPosValid; // 0x290
    char pad_291[0x3];
    FVector LadderTopLinkEnd; // 0x294
    FOdcLadderInfo LadderInfo; // 0x2a0
    char pad_2c8[0x8];
    static ULadderNavLinkComponent* StaticClass();
    void UpdateNavLink(FOdcLadderInfo& Info);
    void RegisterNavLink();
    bool HasValidLinks();
}; // Size: 0x2d0
#pragma pack(pop)
