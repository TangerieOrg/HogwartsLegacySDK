#pragma once
#include <cstdint>
#include "FAnimRequest.hpp"
#include "FTransform.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USceneRigAnimTrackRequestProvider : public UObject {
public:
    char pad_28[0x18];
    FName LayerName; // 0x40
    char pad_48[0x8];
    FAnimRequest AnimationRequest; // 0x50
    char pad_d0[0x8];
    bool ConstrainedToPlacement; // 0xd8
    bool bUnscaleHipsBone; // 0xd9
    bool PlacementHandledByRequest; // 0xda
    char pad_db[0x5];
    FTransform TransformInWorldSpace; // 0xe0
    char pad_110[0x10];
    static USceneRigAnimTrackRequestProvider* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
