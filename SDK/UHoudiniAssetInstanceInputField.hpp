#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UHoudiniAssetInstanceInputField : public UObject {
public:
    char pad_28[0x178];
    static UHoudiniAssetInstanceInputField* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)
