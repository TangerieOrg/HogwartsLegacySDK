#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UClass;
class UDialogueLineRule;
#pragma pack(push, 1)
class UDialogueSequenceRule : public UDataAsset {
public:
    char pad_30[0x8];
    UClass* StageClass; // 0x38
    UClass* SceneRigClass; // 0x40
    TArray<UDialogueLineRule*> LineRules; // 0x48
    static UDialogueSequenceRule* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
