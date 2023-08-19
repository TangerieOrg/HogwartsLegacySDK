#pragma once
#include <cstdint>
#include "USceneRig.hpp"
class UMediaSource;
class UDataTable;
#pragma pack(push, 1)
class USceneRig_Bink : public USceneRig {
public:
    static USceneRig_Bink* StaticClass();
    USceneRig_Bink* PlayBink(UMediaSource* FileMediaSource, UDataTable* Subtitles);
}; // Size: 0x238
#pragma pack(pop)
