#pragma once
#include <cstdint>
#include "EStandardManagedPriority.hpp"
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_HUDVisibility : public USceneRigActionBase {
public:
    bool ShouldBeHidden; // 0x88
    bool ShowLetterboxUI; // 0x89
    bool bAnimateOnEnter; // 0x8a
    bool bAnimateOnExit; // 0x8b
    EStandardManagedPriority Priority; // 0x8c
    char pad_8d[0x3];
    static USceneAction_HUDVisibility* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
