#pragma once
#include <cstdint>
#include "FDialogueLineReference.hpp"
#include "UStringProvider.hpp"
#pragma pack(push, 1)
class UString_DialogueArticyID : public UStringProvider {
public:
    FDialogueLineReference DialogueLine; // 0x28
    static UString_DialogueArticyID* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
