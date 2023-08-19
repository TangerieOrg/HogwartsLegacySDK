#pragma once
#include <cstdint>
#include "FDialogueDataTableHandles.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UFacialComponentShimHelper : public UObject {
public:
    static UFacialComponentShimHelper* StaticClass();
    static FDialogueDataTableHandles PreloadPlayerMaleFemaleDialogueDataTables();
}; // Size: 0x28
#pragma pack(pop)
