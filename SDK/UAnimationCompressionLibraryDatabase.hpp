#pragma once
#include <cstdint>
#include "ACLVisualFidelity.hpp"
#include "ACLVisualFidelityChangeResult.hpp"
#include "FLatentActionInfo.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UAnimationCompressionLibraryDatabase : public UObject {
public:
    TArray<uint8_t> CookedCompressedBytes; // 0x28
    TArray<uint64_t> CookedAnimSequenceMappings; // 0x38
    char pad_48[0xd8];
    uint32_t MaxStreamRequestSizeKB; // 0x120
    char pad_124[0x1c];
    static UAnimationCompressionLibraryDatabase* StaticClass();
    static void SetVisualFidelity(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UAnimationCompressionLibraryDatabase* DatabaseAsset, ACLVisualFidelityChangeResult& Result, ACLVisualFidelity VisualFidelity);
    static ACLVisualFidelity GetVisualFidelity(UAnimationCompressionLibraryDatabase* DatabaseAsset);
}; // Size: 0x140
#pragma pack(pop)
