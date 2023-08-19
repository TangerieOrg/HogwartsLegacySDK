#pragma once
#include <cstdint>
#include "FActionParameter_DialogueEvent.hpp"
#include "FAudioDialogueFlags.hpp"
#include "USceneRigObjectActionBase.hpp"
class UDialogueLineProvider;
#pragma pack(push, 1)
class USceneAction_Dialogue : public USceneRigObjectActionBase {
public:
    UDialogueLineProvider* Line; // 0xa0
    char pad_a8[0x50];
    bool StopWhenAttachedToDestroyed; // 0xf8
    FAudioDialogueFlags AudioDialogueFlags; // 0xf9
    bool CutoffDialogueAtFinish; // 0x100
    char pad_101[0x7];
    FActionParameter_DialogueEvent Event; // 0x108
    static USceneAction_Dialogue* StaticClass();
}; // Size: 0x178
#pragma pack(pop)
