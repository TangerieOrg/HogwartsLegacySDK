#pragma once
#include <cstdint>
#include "UToolRecord.hpp"
class UClass;
#pragma pack(push, 1)
class UItemToolRecord : public UToolRecord {
public:
    UClass* ItemTool; // 0x50
    static UItemToolRecord* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
