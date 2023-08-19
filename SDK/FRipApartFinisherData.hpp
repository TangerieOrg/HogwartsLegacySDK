#pragma once
#include <cstdint>
class USkeletalMesh;
#pragma pack(push, 1)
struct FRipApartFinisherData {
    USkeletalMesh* BodyMesh; // 0x0
    USkeletalMesh* LegMesh; // 0x8
}; // Size: 0x10
#pragma pack(pop)
