#pragma once
#include <cstdint>
#include "FSceneRigStageRole.hpp"
#include "UObject.hpp"
class UStationStoryPropAttachment;
#pragma pack(push, 1)
class UStationStoryProp : public UObject {
public:
    FSceneRigStageRole PropCastMember; // 0x28
    UStationStoryPropAttachment* Attachment; // 0x30
    static UStationStoryProp* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
