#pragma once
#include <cstdint>
#include "ALeviosoSpellTool.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_LeviosoSpell_C : public ALeviosoSpellTool {
public:
    USceneComponent* DefaultSceneRoot; // 0x8f8
    static ABP_LeviosoSpell_C* StaticClass();
}; // Size: 0x900
#pragma pack(pop)
