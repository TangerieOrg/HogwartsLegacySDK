#pragma once
#include <cstdint>
#include "ETrackActiveCondition.hpp"
#include "UObject.hpp"
class UClass;
#pragma pack(push, 1)
class UInterpTrack : public UObject {
public:
    char pad_28[0x10];
    TArray<UInterpTrack*> SubTracks; // 0x38
    UClass* TrackInstClass; // 0x48
    ETrackActiveCondition ActiveCondition; // 0x50
    char pad_51[0x7];
    FString TrackTitle; // 0x58
    uint8_t bOnePerGroup : 1; // 0x68
    uint8_t bDirGroupOnly : 1; // 0x68
    uint8_t bDisableTrack : 1; // 0x68
    uint8_t bIsSelected : 1; // 0x68
    uint8_t bIsAnimControlTrack : 1; // 0x68
    uint8_t bSubTrackOnly : 1; // 0x68
    uint8_t bVisible : 1; // 0x68
    uint8_t bIsRecording : 1; // 0x68
    char pad_69[0x7];
    static UInterpTrack* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
