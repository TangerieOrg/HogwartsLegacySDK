#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
class ULevelSequencePlayer;
class UMovieSceneBindingOverrides;
#pragma pack(push, 1)
class USceneActionState_Sequence : public USceneRigActionState {
public:
    char pad_50[0x10];
    ULevelSequencePlayer* SequencePlayer; // 0x60
    UMovieSceneBindingOverrides* BindingOverrides; // 0x68
    TArray<void*> PossessedActors; // 0x70
    static USceneActionState_Sequence* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
