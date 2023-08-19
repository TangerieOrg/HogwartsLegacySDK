#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "URevolveProperties.hpp"
#pragma pack(push, 1)
class URevolveToolProperties : public URevolveProperties {
public:
    bool bConnectOpenProfileToAxis; // 0xb0
    bool bSnapToWorldGrid; // 0xb1
    char pad_b2[0x2];
    FVector DrawPlaneOrigin; // 0xb4
    FRotator DrawPlaneOrientation; // 0xc0
    bool bEnableSnapping; // 0xcc
    bool bAllowedToEditDrawPlane; // 0xcd
    char pad_ce[0x2];
    static URevolveToolProperties* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
