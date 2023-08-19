#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UARBaseAsyncTaskBlueprintProxy.hpp"
class UObject;
#pragma pack(push, 1)
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
public:
    char pad_50[0x48];
    static UARGetCandidateObjectAsyncTaskBlueprintProxy* StaticClass();
    static UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(UObject* WorldContextObject, FVector Location, FVector Extent);
}; // Size: 0x98
#pragma pack(pop)
