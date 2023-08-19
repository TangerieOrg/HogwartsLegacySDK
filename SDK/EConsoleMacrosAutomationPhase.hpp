#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConsoleMacrosAutomationPhase {
    OnBeginPlay = 0,
    OnEndPlay = 1,
    OnBeginPlayInEditor = 2,
    OnEndPlayInEditor = 3,
    OnEditorLevelOpen = 4,
    OnEditorLevelClose = 5,
    EConsoleMacrosAutomationPhase_MAX = 6,
};
#pragma pack(pop)
