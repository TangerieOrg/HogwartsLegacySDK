#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UInteractionMechanic : public UObject {
public:
    char pad_28[0x8];
    static UInteractionMechanic* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
