#pragma once
#include <cstdint>
#include "FAnimNode_CustomProperty.hpp"
#include "FPoseLink.hpp"
class UClass;
#pragma pack(push, 1)
struct FAnimNode_LinkedAnimGraph : public FAnimNode_CustomProperty {
    TArray<FPoseLink> InputPoses; // 0x58
    TArray<FName> InputPoseNames; // 0x68
    UClass* InstanceClass; // 0x78
    FName Tag; // 0x80
    char pad_88[0x14];
    uint8_t bReceiveNotifiesFromLinkedInstances : 1; // 0x9c
    uint8_t bPropagateNotifiesToLinkedInstances : 1; // 0x9c
    uint8_t pad_bitfield_9c_2 : 6;
    char pad_9d[0x3];
}; // Size: 0xa0
#pragma pack(pop)
