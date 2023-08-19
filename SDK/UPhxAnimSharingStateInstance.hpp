#pragma once
#include <cstdint>
#include "EFacialAnimType.hpp"
#include "UAnimSharingStateInstance.hpp"
class UPoseAsset;
class UAimEyesData;
class UAnimSequence;
#pragma pack(push, 1)
class UPhxAnimSharingStateInstance : public UAnimSharingStateInstance {
public:
    UPoseAsset* FemalePoseAsset; // 0x2e0
    UPoseAsset* MalePoseAsset; // 0x2e8
    UPoseAsset* ActivePoseAsset; // 0x2f0
    UAimEyesData* ActiveEyeAsset; // 0x2f8
    UAnimSequence* FacialAnimationToPlay; // 0x300
    char pad_308[0xa0];
    EFacialAnimType UseFacialAnimation; // 0x3a8
    char pad_3a9[0x7];
    static UPhxAnimSharingStateInstance* StaticClass();
}; // Size: 0x3b0
#pragma pack(pop)
