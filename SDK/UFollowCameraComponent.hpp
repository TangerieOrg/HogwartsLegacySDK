#pragma once
#include <cstdint>
#include "EFollowCameraType.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UFollowCameraComponent : public UActorComponent {
public:
    EFollowCameraType FollowType; // 0xc8
    char pad_c9[0x3];
    float ZValue; // 0xcc
    char pad_d0[0x38];
    static UFollowCameraComponent* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
