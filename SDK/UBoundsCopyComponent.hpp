#pragma once
#include <cstdint>
#include "FTransform.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UBoundsCopyComponent : public UActorComponent {
public:
    char pad_c8[0x28];
    bool bUseCollidingComponentsForSourceBounds; // 0xf0
    bool bKeepOwnBoundsScale; // 0xf1
    bool bUseCollidingComponentsForOwnBounds; // 0xf2
    char pad_f3[0xd];
    FTransform PostTransform; // 0x100
    bool bCopyXBounds; // 0x130
    bool bCopyYBounds; // 0x131
    bool bCopyZBounds; // 0x132
    char pad_133[0xd];
    static UBoundsCopyComponent* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
