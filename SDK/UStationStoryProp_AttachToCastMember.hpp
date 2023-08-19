#pragma once
#include <cstdint>
#include "FSceneRigStageRole.hpp"
#include "UStationStoryPropAttachment.hpp"
#pragma pack(push, 1)
class UStationStoryProp_AttachToCastMember : public UStationStoryPropAttachment {
public:
    FSceneRigStageRole AttachParent; // 0x28
    FString AttachSocket; // 0x30
    static UStationStoryProp_AttachToCastMember* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
