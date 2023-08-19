#pragma once
#include <cstdint>
#include "FPropertyAccessCopyBatch.hpp"
#include "FPropertyAccessIndirection.hpp"
#include "FPropertyAccessIndirectionChain.hpp"
#include "FPropertyAccessPath.hpp"
#include "FPropertyAccessSegment.hpp"
#pragma pack(push, 1)
struct FPropertyAccessLibrary {
    TArray<FPropertyAccessSegment> PathSegments; // 0x0
    TArray<FPropertyAccessPath> SrcPaths; // 0x10
    TArray<FPropertyAccessPath> DestPaths; // 0x20
    FPropertyAccessCopyBatch CopyBatches[4]; // 0x30
    TArray<FPropertyAccessIndirectionChain> SrcAccesses; // 0x70
    TArray<FPropertyAccessIndirectionChain> DestAccesses; // 0x80
    TArray<FPropertyAccessIndirection> Indirections; // 0x90
    TArray<int32_t> EventAccessIndices; // 0xa0
    char pad_b0[0x18];
}; // Size: 0xc8
#pragma pack(pop)
