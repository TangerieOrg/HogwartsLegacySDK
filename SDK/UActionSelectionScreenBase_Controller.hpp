#pragma once
#include <cstdint>
#include "UActionSelectionScreenBase.hpp"
#pragma pack(push, 1)
class UActionSelectionScreenBase_Controller : public UActionSelectionScreenBase {
public:
    char pad_458[0x20];
    static UActionSelectionScreenBase_Controller* StaticClass();
    void OnSpellModifierRelease();
    void OnSpellModifierPress();
}; // Size: 0x478
#pragma pack(pop)
