#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class ULoadingScreenChooser : public UObject {
public:
    char pad_28[0x18];
    static ULoadingScreenChooser* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
