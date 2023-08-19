#pragma once
#include <cstdint>
#include "FLevelSequenceAnimSequenceLinkItem.hpp"
#include "UAssetUserData.hpp"
#pragma pack(push, 1)
class ULevelSequenceAnimSequenceLink : public UAssetUserData {
public:
    TArray<FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x28
    static ULevelSequenceAnimSequenceLink* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
