#pragma once
#include <cstdint>
#include "FAudioDialogueFlags.hpp"
#include "FTimeRigOutputSymbol.hpp"
#include "USceneRigObjectActionBase.hpp"
class UDialogueEventProvider;
class UFloatProvider;
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_DialogueBucket : public USceneRigObjectActionBase {
public:
    TArray<UDialogueEventProvider*> EventBucket; // 0xa0
    UFloatProvider* RepeatDelay; // 0xb0
    FTimeRigOutputSymbol DialogueStart; // 0xb8
    FTimeRigOutputSymbol DialogueFinish; // 0xd0
    bool CutoffDialogueAtFinish; // 0xe8
    FAudioDialogueFlags AudioDialogueFlags; // 0xe9
    UTransformProvider* AtLocation; // 0xf0
    bool RestrictDialogueByProximity; // 0xf8
    char pad_f9[0x3];
    float ProximityRadius; // 0xfc
    static USceneAction_DialogueBucket* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
