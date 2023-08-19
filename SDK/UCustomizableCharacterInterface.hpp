#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UCustomizableCharacterInterface : public UInterface {
public:
    static UCustomizableCharacterInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
