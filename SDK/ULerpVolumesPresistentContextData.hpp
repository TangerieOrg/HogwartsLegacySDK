#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class ULerpVolumesPresistentContextData : public UObject {
public:
    char pad_28[0x50];
    static ULerpVolumesPresistentContextData* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
