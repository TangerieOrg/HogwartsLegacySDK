#pragma once
#include <cstdint>
#include "UPrimitiveComponent.hpp"
class UBodySetup;
#pragma pack(push, 1)
class UBakedRagdollPoseComponent : public UPrimitiveComponent {
public:
    UBodySetup* RagdollPoseBodySetup; // 0x480
    char pad_488[0x8];
    static UBakedRagdollPoseComponent* StaticClass();
}; // Size: 0x490
#pragma pack(pop)
