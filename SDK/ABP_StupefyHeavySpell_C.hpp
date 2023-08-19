#pragma once
#include <cstdint>
#include "AStupefySpellTool.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_StupefyHeavySpell_C : public AStupefySpellTool {
public:
    USceneComponent* DefaultSceneRoot; // 0x8b8
    static ABP_StupefyHeavySpell_C* StaticClass();
}; // Size: 0x8c0
#pragma pack(pop)
