#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UObjectReferencer : public UObject {
public:
    TArray<UObject*> ReferencedObjects; // 0x28
    static UObjectReferencer* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
