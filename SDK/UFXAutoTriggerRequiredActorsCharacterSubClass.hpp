#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsCharacters.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsCharacterSubClass : public UFXAutoTriggerRequiredActorsCharacters {
public:
    char pad_28[0x28];
    static UFXAutoTriggerRequiredActorsCharacterSubClass* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
