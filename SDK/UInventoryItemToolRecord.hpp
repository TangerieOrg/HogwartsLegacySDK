#pragma once
#include <cstdint>
#include "UToolRecord.hpp"
#pragma pack(push, 1)
class UInventoryItemToolRecord : public UToolRecord {
public:
    char pad_50[0x40];
    static UInventoryItemToolRecord* StaticClass();
    void LoadComplete__DelegateSignature(UInventoryItemToolRecord* ToolRecord);
    void LoadComplete();
    bool IsLoaded();
}; // Size: 0x90
#pragma pack(pop)
