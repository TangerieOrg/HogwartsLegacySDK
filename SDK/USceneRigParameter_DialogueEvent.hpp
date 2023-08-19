#pragma once
#include <cstdint>
#include "FSceneRigDialogTrackSectionData.hpp"
#include "USceneRigParameter.hpp"
#pragma pack(push, 1)
class USceneRigParameter_DialogueEvent : public USceneRigParameter {
public:
    FSceneRigDialogTrackSectionData Value; // 0x38
    static USceneRigParameter_DialogueEvent* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
