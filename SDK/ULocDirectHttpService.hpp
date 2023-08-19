#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class ULocDirectHttpService : public UObject {
public:
    char pad_28[0x48];
    FString LocDirectAPI_Url; // 0x70
    char pad_80[0x80];
    static ULocDirectHttpService* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
