#pragma once
#include <cstdint>
#include "FSceneActionSequence_ActorMapping.hpp"
#include "USceneRigActionBase.hpp"
class ULevelSequence;
#pragma pack(push, 1)
class USceneAction_Sequence : public USceneRigActionBase {
public:
    ULevelSequence* Sequence; // 0x88
    bool Looping; // 0x90
    char pad_91[0x3];
    float SequenceStart; // 0x94
    float SequenceFinish; // 0x98
    char pad_9c[0x4];
    TArray<FSceneActionSequence_ActorMapping> ActorMapping; // 0xa0
    static USceneAction_Sequence* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
