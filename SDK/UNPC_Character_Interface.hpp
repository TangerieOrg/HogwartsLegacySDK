#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UNPC_Character_Interface : public UInterface {
public:
    static UNPC_Character_Interface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
