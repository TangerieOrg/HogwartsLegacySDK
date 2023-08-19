#pragma once
#include <cstdint>
#include "ECommandForType.hpp"
#include "UDialogueScriptEventCommand.hpp"
class UNameProvider;
#pragma pack(push, 1)
class UDialogueScriptEventExplicitPoseGroupCommand : public UDialogueScriptEventCommand {
public:
    UNameProvider* PoseGroup; // 0x38
    bool OverrideDuration; // 0x40
    char pad_41[0x3];
    float MinDurationSeconds; // 0x44
    float MaxDurationSeconds; // 0x48
    ECommandForType For; // 0x4c
    char pad_4d[0x3];
    static UDialogueScriptEventExplicitPoseGroupCommand* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
