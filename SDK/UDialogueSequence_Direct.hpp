#pragma once
#include <cstdint>
#include "FDialogueSequenceReference.hpp"
#include "UDialogueSequenceProvider.hpp"
#pragma pack(push, 1)
class UDialogueSequence_Direct : public UDialogueSequenceProvider {
public:
    FDialogueSequenceReference DialogueSequence; // 0x28
    static UDialogueSequence_Direct* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
