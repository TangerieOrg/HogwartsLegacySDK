#pragma once
#include <cstdint>
#include "AChannelingSpellTool.hpp"
class UClass;
#pragma pack(push, 1)
class AGenericBPSpellTool : public AChannelingSpellTool {
public:
    UClass* BPActorClass; // 0x960
    char pad_968[0x8];
    static AGenericBPSpellTool* StaticClass();
}; // Size: 0x970
#pragma pack(pop)
