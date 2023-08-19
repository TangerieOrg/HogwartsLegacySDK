#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FSoftObjectPath.hpp"
#include "UAssetUserData.hpp"
#pragma pack(push, 1)
class UAnimSequenceLevelSequenceLink : public UAssetUserData {
public:
    FGuid SkelTrackGuid; // 0x28
    FSoftObjectPath PathToLevelSequence; // 0x38
    static UAnimSequenceLevelSequenceLink* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
