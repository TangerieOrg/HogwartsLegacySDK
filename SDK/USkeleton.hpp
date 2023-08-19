#pragma once
#include <cstdint>
#include "FAnimSlotGroup.hpp"
#include "FBoneNode.hpp"
#include "FGuid.hpp"
#include "FSmartNameContainer.hpp"
#include "FTransform.hpp"
#include "FVirtualBone.hpp"
#include "UObject.hpp"
class USkeletalMeshSocket;
class UBlendProfile;
class UAssetUserData;
#pragma pack(push, 1)
class USkeleton : public UObject {
public:
    char pad_28[0x10];
    TArray<FBoneNode> BoneTree; // 0x38
    TArray<FTransform> RefLocalPoses; // 0x48
    char pad_58[0x118];
    FGuid VirtualBoneGuid; // 0x170
    TArray<FVirtualBone> VirtualBones; // 0x180
    TArray<USkeletalMeshSocket*> Sockets; // 0x190
    char pad_1a0[0x50];
    FSmartNameContainer SmartNames; // 0x1f0
    char pad_240[0x30];
    TArray<UBlendProfile*> BlendProfiles; // 0x270
    TArray<FAnimSlotGroup> SlotGroups; // 0x280
    char pad_290[0xf0];
    TArray<UAssetUserData*> AssetUserData; // 0x380
    static USkeleton* StaticClass();
}; // Size: 0x390
#pragma pack(pop)
