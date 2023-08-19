#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSceneActionConsoleCommand {
    FName Command; // 0x0
    FName ValueOnEnter; // 0x8
    FName ValueOnExit; // 0x10
}; // Size: 0x18
#pragma pack(pop)
