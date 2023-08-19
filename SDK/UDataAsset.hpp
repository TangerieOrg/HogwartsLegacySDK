#pragma once
#include <cstdint>
#include "UObject.hpp"
class UClass;
#pragma pack(push, 1)
class UDataAsset : public UObject {
public:
    UClass* NativeClass; // 0x28
    static UDataAsset* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
