#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMapIconInstance;
#pragma pack(push, 1)
class UMapIconList : public UObject {
public:
    TArray<UMapIconInstance*> Icons; // 0x28
    char pad_38[0x28];
    static UMapIconList* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
