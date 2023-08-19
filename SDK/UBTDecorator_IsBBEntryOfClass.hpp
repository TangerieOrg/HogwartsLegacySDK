#pragma once
#include <cstdint>
#include "UBTDecorator_BlackboardBase.hpp"
class UClass;
#pragma pack(push, 1)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase {
public:
    UClass* TestClass; // 0x90
    static UBTDecorator_IsBBEntryOfClass* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
