#pragma once
#include <cstdint>
#include "UObject.hpp"
class UDuelTechniquesController;
class UDuelTechniqueState;
#pragma pack(push, 1)
class UDuelTechnique : public UObject {
public:
    char pad_28[0x8];
    UDuelTechniquesController* ParentController; // 0x30
    char pad_38[0x8];
    UDuelTechniqueState* State; // 0x40
    static UDuelTechnique* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
