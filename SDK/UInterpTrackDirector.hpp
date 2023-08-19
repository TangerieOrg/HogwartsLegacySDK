#pragma once
#include <cstdint>
#include "FDirectorTrackCut.hpp"
#include "UInterpTrack.hpp"
#pragma pack(push, 1)
class UInterpTrackDirector : public UInterpTrack {
public:
    TArray<FDirectorTrackCut> CutTrack; // 0x70
    uint8_t bSimulateCameraCutsOnClients : 1; // 0x80
    uint8_t pad_bitfield_80_1 : 7;
    char pad_81[0x7];
    static UInterpTrackDirector* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
