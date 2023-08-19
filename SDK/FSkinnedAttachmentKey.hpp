#pragma once
#include <cstdint>
class UDynamicSplineSet;
class USkeletalMeshComponent;
#pragma pack(push, 1)
struct FSkinnedAttachmentKey {
    UDynamicSplineSet* ParentSplineSet; // 0x0
    USkeletalMeshComponent* HostMesh; // 0x8
}; // Size: 0x10
#pragma pack(pop)
