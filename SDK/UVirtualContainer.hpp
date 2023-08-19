#pragma once
#include <cstdint>
#include "FVCSlot.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UVirtualContainer : public UObject {
public:
    char pad_28[0x20];
    static UVirtualContainer* StaticClass();
    bool IsFinite(FString ContainerID);
    TArray<FVCSlot> GetContents(FString ContainerID);
}; // Size: 0x48
#pragma pack(pop)
