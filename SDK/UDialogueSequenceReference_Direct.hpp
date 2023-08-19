#pragma once
#include <cstdint>
#include "FDialogueSequenceReference.hpp"
#include "UDialogueSequenceReferenceProvider.hpp"
#pragma pack(push, 1)
class UDialogueSequenceReference_Direct : public UDialogueSequenceReferenceProvider {
public:
    FDialogueSequenceReference Value; // 0x28
    static UDialogueSequenceReference_Direct* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
