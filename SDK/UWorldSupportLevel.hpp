#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UWorldSupportLevel : public UObject {
public:
    char pad_28[0x68];
    static UWorldSupportLevel* StaticClass();
    void OnUnload();
    void OnShow();
    void OnLoad();
    void OnHidden();
}; // Size: 0x90
#pragma pack(pop)
