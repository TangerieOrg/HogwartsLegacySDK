#pragma once
#include <cstdint>
#include "FDialogueLineReference.hpp"
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_DialogueArticy_Selectable : public UBoolProvider {
public:
    FDialogueLineReference DialogueLine; // 0x28
    static UBool_DialogueArticy_Selectable* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
