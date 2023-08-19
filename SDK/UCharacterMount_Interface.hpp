#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UCharacterMount_Interface : public UInterface {
public:
    static UCharacterMount_Interface* StaticClass();
    void SetClothTargetsStartDelegate();
    void SetClothTargetsEndDelegate();
}; // Size: 0x28
#pragma pack(pop)
