#pragma once
#include <cstdint>
#include "FSceneParameterChangeRequest.hpp"
#include "FSceneRigParameters.hpp"
#include "UTimeRigInstanceContext.hpp"
class ULevelStreaming;
#pragma pack(push, 1)
class USceneRigInstanceContext : public UTimeRigInstanceContext {
public:
    char pad_6b8[0x270];
    TArray<ULevelStreaming*> StreamingLevels; // 0x928
    char pad_938[0x60];
    FSceneRigParameters Parameters; // 0x998
    TArray<FSceneParameterChangeRequest> ParameterChangeRequests; // 0xa20
    char pad_a30[0xf0];
    static USceneRigInstanceContext* StaticClass();
}; // Size: 0xb20
#pragma pack(pop)
