#pragma once
#include <cstdint>
#include "FSceneRigParameterBinding_FString.hpp"
#include "UDialogueEvent_Direct.hpp"
#pragma pack(push, 1)
class UDialogEvent_SceneRigParameter : public UDialogueEvent_Direct {
public:
    FSceneRigParameterBinding_FString BoundParameter; // 0x38
    static UDialogEvent_SceneRigParameter* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
