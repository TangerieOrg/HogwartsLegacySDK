#pragma once
#include <cstdint>
#include "FAudioDialogueFlags.hpp"
#include "USceneRigObjectActionBase.hpp"
class UDialogueLineProvider;
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_DialogueLine : public USceneRigObjectActionBase {
public:
    UDialogueLineProvider* Line; // 0xa0
    bool CutoffDialogueAtFinish; // 0xa8
    FAudioDialogueFlags AudioDialogueFlags; // 0xa9
    UTransformProvider* AtLocation; // 0xb0
    static USceneAction_DialogueLine* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
