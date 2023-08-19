#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_SanctuaryZoneStreaming : public UActorProvider {
public:
    char pad_38[0x8];
    FName ZoneName; // 0x40
    bool bWaitForParallelStreamingComplete; // 0x48
    char pad_49[0x7];
    static UActor_SanctuaryZoneStreaming* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
