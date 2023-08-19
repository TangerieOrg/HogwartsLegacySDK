#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_CharacterCaptureFocus : public USceneRigObjectActionBase {
public:
    bool bCaptureFocusOnActionStart; // 0xa0
    bool bReleaseFocusOnActionEnd; // 0xa1
    char pad_a2[0x6];
    static USceneAction_CharacterCaptureFocus* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
