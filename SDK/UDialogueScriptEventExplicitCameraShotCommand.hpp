#pragma once
#include <cstdint>
#include "ECommandLookAtType.hpp"
#include "UDialogueScriptEventCommand.hpp"
class UNameProvider;
#pragma pack(push, 1)
class UDialogueScriptEventExplicitCameraShotCommand : public UDialogueScriptEventCommand {
public:
    UNameProvider* CameraShot; // 0x38
    ECommandLookAtType LookAt; // 0x40
    bool BlockLineImplicitCameraChanges; // 0x41
    bool BlockEndingCameraChanges; // 0x42
    char pad_43[0x5];
    static UDialogueScriptEventExplicitCameraShotCommand* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
