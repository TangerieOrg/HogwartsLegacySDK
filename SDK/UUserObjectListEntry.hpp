#pragma once
#include <cstdint>
#include "UUserListEntry.hpp"
class UObject;
#pragma pack(push, 1)
class UUserObjectListEntry : public UUserListEntry {
public:
    static UUserObjectListEntry* StaticClass();
    void OnListItemObjectSet(UObject* ListItemObject);
}; // Size: 0x28
#pragma pack(pop)
