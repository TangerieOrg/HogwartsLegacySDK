#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UObject;
#pragma pack(push, 1)
class UModdableCustomGather : public UInterface {
public:
    static UModdableCustomGather* StaticClass();
    TArray<UObject*> GatherAssociatedModdables();
}; // Size: 0x28
#pragma pack(pop)
