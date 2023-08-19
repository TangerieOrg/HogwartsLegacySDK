#pragma once
#include <cstdint>
#include "AStreamingPlaceholderBase.hpp"
#include "EStreamingPlaceholderPriority.hpp"
#include "ETransfigurationInitialColor.hpp"
#include "FDbSingleColumnInfo.hpp"
class AActor;
#pragma pack(push, 1)
class ATransfigurationPlaceholder : public AStreamingPlaceholderBase {
public:
    FDbSingleColumnInfo ObjectCategory; // 0x260
    FDbSingleColumnInfo ObjectID; // 0x2e8
    FDbSingleColumnInfo ExpansionID; // 0x370
    FDbSingleColumnInfo ExpandedObjectCategory; // 0x3f8
    ETransfigurationInitialColor InitialColor; // 0x480
    char pad_481[0x7];
    FString IdentifyingName; // 0x488
    bool bOverride_StreamingPriority; // 0x498
    EStreamingPlaceholderPriority StreamingPriority; // 0x499
    char pad_49a[0x2];
    uint32_t UID; // 0x49c
    int32_t SignedUID; // 0x4a0
    char pad_4a4[0x4];
    AActor* SpawnedActor; // 0x4a8
    char pad_4b0[0x10];
    static ATransfigurationPlaceholder* StaticClass();
}; // Size: 0x4c0
#pragma pack(pop)
