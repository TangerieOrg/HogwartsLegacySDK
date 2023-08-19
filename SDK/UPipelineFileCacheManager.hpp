#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UPipelineFileCacheManager : public UObject {
public:
    char pad_28[0x8];
    static UPipelineFileCacheManager* StaticClass();
    void ResumeBatching();
    void PauseBatching();
    bool IsPrecachingEnabled();
    bool IsPipelioneFileCacheManagerEnabled();
    bool IsBatchingPaused();
    static UPipelineFileCacheManager* Get();
}; // Size: 0x30
#pragma pack(pop)
