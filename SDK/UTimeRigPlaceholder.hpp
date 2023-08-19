#pragma once
#include <cstdint>
#include "UTimeRigElement.hpp"
class UClass;
#pragma pack(push, 1)
class UTimeRigPlaceholder : public UTimeRigElement {
public:
    UClass* PlaceholderForType; // 0x50
    TArray<UTimeRigElement*> ChildElements; // 0x58
    static UTimeRigPlaceholder* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
