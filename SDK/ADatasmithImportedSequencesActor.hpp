#pragma once
#include <cstdint>
#include "AActor.hpp"
class ULevelSequence;
#pragma pack(push, 1)
class ADatasmithImportedSequencesActor : public AActor {
public:
    TArray<ULevelSequence*> ImportedSequences; // 0x248
    static ADatasmithImportedSequencesActor* StaticClass();
    void PlayLevelSequence(ULevelSequence* SequenceToPlay);
}; // Size: 0x258
#pragma pack(pop)
