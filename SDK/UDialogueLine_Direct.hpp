#pragma once
#include <cstdint>
#include "FDialogueLineReference.hpp"
#include "UDialogueLineProvider.hpp"
#pragma pack(push, 1)
class UDialogueLine_Direct : public UDialogueLineProvider {
public:
    FDialogueLineReference DialogueLine; // 0x28
    static UDialogueLine_Direct* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
