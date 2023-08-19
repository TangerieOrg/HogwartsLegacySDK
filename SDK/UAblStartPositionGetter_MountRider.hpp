#pragma once
#include <cstdint>
#include "UAblStartPositionGetter_MatchAnimationPosition.hpp"
class UClass;
#pragma pack(push, 1)
class UAblStartPositionGetter_MountRider : public UAblStartPositionGetter_MatchAnimationPosition {
public:
    UClass* RequiredAbility; // 0x30
    static UAblStartPositionGetter_MountRider* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
