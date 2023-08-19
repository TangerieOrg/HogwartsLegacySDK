#pragma once
#include <cstdint>
#include "UPathFollowingComponent.hpp"
class USocialAgentPawnComponent;
#pragma pack(push, 1)
class USplineFollowingComponent : public UPathFollowingComponent {
public:
    USocialAgentPawnComponent* Agent; // 0x268
    char pad_270[0x108];
    static USplineFollowingComponent* StaticClass();
}; // Size: 0x378
#pragma pack(pop)
