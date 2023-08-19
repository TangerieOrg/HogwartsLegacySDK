#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class ULoadComplete : public UObject {
public:
    char pad_28[0x8];
    static ULoadComplete* StaticClass();
    void OnLoadCompleteCallback();
}; // Size: 0x30
#pragma pack(pop)
