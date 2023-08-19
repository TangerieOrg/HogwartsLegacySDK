#pragma once
#include <cstdint>
#include "FAudioDialogueFlags.hpp"
#include "USceneRigObjectActionBase.hpp"
class UDialogueEventProvider;
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_DialogueEvent : public USceneRigObjectActionBase {
public:
    UDialogueEventProvider* Event; // 0xa0
    bool CutoffDialogueAtFinish; // 0xa8
    FAudioDialogueFlags AudioDialogueFlags; // 0xa9
    UTransformProvider* AtLocation; // 0xb0
    static USceneAction_DialogueEvent* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
