#pragma once
#include <cstdint>
#include "FDialogueLineReference.hpp"
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_DialogueArticyCondition : public UBoolProvider {
public:
    FDialogueLineReference DialogueLine; // 0x28
    static UBool_DialogueArticyCondition* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
