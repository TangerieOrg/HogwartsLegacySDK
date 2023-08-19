#pragma once
#include <cstdint>
#include "FSceneRigDialogTrackSectionData.hpp"
#include "FSceneRigParameterBinding_DialogueEvent.hpp"
#pragma pack(push, 1)
struct FActionParameter_DialogueEvent {
    FSceneRigParameterBinding_DialogueEvent BoundParameter; // 0x0
    FSceneRigDialogTrackSectionData DefaultEvent; // 0x8
}; // Size: 0x70
#pragma pack(pop)
