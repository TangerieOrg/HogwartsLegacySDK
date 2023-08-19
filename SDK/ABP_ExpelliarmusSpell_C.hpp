#pragma once
#include <cstdint>
#include "AExpelliarmusSpellTool.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_ExpelliarmusSpell_C : public AExpelliarmusSpellTool {
public:
    USceneComponent* DefaultSceneRoot; // 0x8c0
    static ABP_ExpelliarmusSpell_C* StaticClass();
}; // Size: 0x8c8
#pragma pack(pop)
