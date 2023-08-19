#include "AActor.hpp"
#include "ADatasmithImportedSequencesActor.hpp"
#include "UFunction.hpp"
#include "ULevelSequence.hpp"
ADatasmithImportedSequencesActor* ADatasmithImportedSequencesActor::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithImportedSequencesActor");
    return (ADatasmithImportedSequencesActor*)res;
}
void ADatasmithImportedSequencesActor::PlayLevelSequence(ULevelSequence* SequenceToPlay) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence"));
    struct Params_PlayLevelSequence {
        ULevelSequence* SequenceToPlay; // 0x0
    }; // Size: 0x8
    Params_PlayLevelSequence params{};
    params.SequenceToPlay = (ULevelSequence*)SequenceToPlay;
    ProcessEvent(func, &params);
}
