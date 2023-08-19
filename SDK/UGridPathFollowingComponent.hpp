#pragma once
#include <cstdint>
#include "UPathFollowingComponent.hpp"
class UNavLocalGridManager;
#pragma pack(push, 1)
class UGridPathFollowingComponent : public UPathFollowingComponent {
public:
    UNavLocalGridManager* GridManager; // 0x268
    char pad_270[0x28];
    static UGridPathFollowingComponent* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
