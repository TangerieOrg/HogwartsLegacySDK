#pragma once
#include <cstdint>
#include "ETickingGroup.hpp"
#include "ETimelineLengthMode.hpp"
#include "FBPVariableMetaDataEntry.hpp"
#include "FGuid.hpp"
#include "FTTEventTrack.hpp"
#include "FTTFloatTrack.hpp"
#include "FTTLinearColorTrack.hpp"
#include "FTTVectorTrack.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UTimelineTemplate : public UObject {
public:
    float TimelineLength; // 0x28
    ETimelineLengthMode LengthMode; // 0x2c
    uint8_t bAutoPlay : 1; // 0x2d
    uint8_t bLoop : 1; // 0x2d
    uint8_t bReplicated : 1; // 0x2d
    uint8_t bIgnoreTimeDilation : 1; // 0x2d
    uint8_t pad_bitfield_2d_4 : 4;
    char pad_2e[0x2];
    TArray<FTTEventTrack> EventTracks; // 0x30
    TArray<FTTFloatTrack> FloatTracks; // 0x40
    TArray<FTTVectorTrack> VectorTracks; // 0x50
    TArray<FTTLinearColorTrack> LinearColorTracks; // 0x60
    TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0x70
    FGuid TimelineGuid; // 0x80
    ETickingGroup TimelineTickGroup; // 0x90
    char pad_91[0x3];
    FName VariableName; // 0x94
    FName DirectionPropertyName; // 0x9c
    FName UpdateFunctionName; // 0xa4
    FName FinishedFunctionName; // 0xac
    char pad_b4[0x4];
    static UTimelineTemplate* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
