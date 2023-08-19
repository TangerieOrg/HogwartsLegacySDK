#pragma once
#include <cstdint>
#include "FSceneRigDialogTrackSectionData.hpp"
#include "USceneRigParameterDefinition.hpp"
#pragma pack(push, 1)
class USceneRigParameterDefinition_DialogueEvent : public USceneRigParameterDefinition {
public:
    FSceneRigDialogTrackSectionData DefaultEvent; // 0x38
    static USceneRigParameterDefinition_DialogueEvent* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
