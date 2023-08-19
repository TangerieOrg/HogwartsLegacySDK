#pragma once
#include <cstdint>
#include "FAudioDialogueFlags.hpp"
#include "FDialogueConversationReference.hpp"
#include "UAblAbilityTask.hpp"
class UAvaAudioDialogueEvent;
#pragma pack(push, 1)
class UAblPlayDialogTask : public UAblAbilityTask {
public:
    FDialogueConversationReference DialogEventReference; // 0x70
    UAvaAudioDialogueEvent* DialogEvent; // 0x80
    FName EventName; // 0x88
    FAudioDialogueFlags AudioDialogueFlags; // 0x90
    bool bStopWhenAttachedToDestroyed; // 0x97
    bool bStopDialogueOnEndTask; // 0x98
    char pad_99[0x57];
    static UAblPlayDialogTask* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
