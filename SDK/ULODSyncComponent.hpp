#pragma once
#include <cstdint>
#include "FComponentSync.hpp"
#include "UActorComponent.hpp"
class UPrimitiveComponent;
#pragma pack(push, 1)
class ULODSyncComponent : public UActorComponent {
public:
    int32_t NumLODs; // 0xc8
    int32_t ForcedLOD; // 0xcc
    TArray<FComponentSync> ComponentsToSync; // 0xd0
    char pad_e0[0x50];
    int32_t CurrentLOD; // 0x130
    int32_t CurrentNumLODs; // 0x134
    TArray<UPrimitiveComponent*> DriveComponents; // 0x138
    TArray<UPrimitiveComponent*> SubComponents; // 0x148
    static ULODSyncComponent* StaticClass();
    FString GetLODSyncDebugText();
}; // Size: 0x158
#pragma pack(pop)
