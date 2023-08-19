#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FSoftObjectPath.hpp"
#pragma pack(push, 1)
struct FLevelSequenceAnimSequenceLinkItem {
    FGuid SkelTrackGuid; // 0x0
    FSoftObjectPath PathToAnimSequence; // 0x10
    bool bExportTransforms; // 0x28
    bool bExportCurves; // 0x29
    bool bRecordInWorldSpace; // 0x2a
    char pad_2b[0x5];
}; // Size: 0x30
#pragma pack(pop)
