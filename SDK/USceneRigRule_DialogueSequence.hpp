#pragma once
#include <cstdint>
#include "FActionParameter_DialogueEvent.hpp"
#include "FActionParameter_FString.hpp"
#include "FSceneRigRule_RuleAsset.hpp"
#include "FSceneRigStage_IntReference.hpp"
#include "FSceneRigStage_StringReference.hpp"
#include "FTimeRigOutputSymbol.hpp"
#include "USceneRigRule.hpp"
class UDialogueSequenceReferenceProvider;
class USceneRig;
class UDialogueSequenceRule;
class UDialogueLineRule;
#pragma pack(push, 1)
class USceneRigRule_DialogueSequence : public USceneRigRule {
public:
    UDialogueSequenceReferenceProvider* DialogueSequenceReference; // 0xa0
    FSceneRigStage_StringReference DialogueEventName; // 0xa8
    FSceneRigStage_StringReference DialogueSequenceName; // 0xb8
    FSceneRigStage_IntReference DialogueFlags; // 0xc8
    FActionParameter_DialogueEvent DialogEvent; // 0xd8
    FActionParameter_FString DialogueSequence; // 0x148
    USceneRig* TemplateSceneRig; // 0x160
    bool CreateTransformActions; // 0x168
    bool CreateChracterOptions; // 0x169
    char pad_16a[0x6];
    UDialogueSequenceRule* Rule; // 0x170
    TArray<FSceneRigRule_RuleAsset> RuleAssets; // 0x178
    TArray<UDialogueLineRule*> LineRules; // 0x188
    FTimeRigOutputSymbol DialogueFinish; // 0x198
    FTimeRigOutputSymbol ForceFinish; // 0x1b0
    static USceneRigRule_DialogueSequence* StaticClass();
}; // Size: 0x1c8
#pragma pack(pop)
