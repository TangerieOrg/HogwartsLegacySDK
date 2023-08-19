#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class ULinkerPlaceholderExportObject : public UObject {
public:
    char pad_28[0xc8];
    static ULinkerPlaceholderExportObject* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
