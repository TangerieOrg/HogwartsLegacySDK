#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FBranchTagCommand.hpp"
#include "FPathScheduleData.hpp"
#include "FStationTagCommand.hpp"
class UPathComponent;
#pragma pack(push, 1)
class AAIPath : public AActor {
public:
    float BlendScale; // 0x248
    bool UseAsEscapePath; // 0x24c
    bool BranchOnly; // 0x24d
    char pad_24e[0x2];
    TArray<FPathScheduleData> PathSchedule; // 0x250
    bool bStartActive; // 0x260
    bool bApparateOnDeactivate; // 0x261
    bool bAllowGroups; // 0x262
    char pad_263[0x1];
    float MinStationHangTime; // 0x264
    float MaxStationHangTime; // 0x268
    char pad_26c[0x4];
    UPathComponent* PathComponent; // 0x270
    TArray<FBranchTagCommand> BranchCommands; // 0x278
    TArray<FStationTagCommand> StationCommands; // 0x288
    bool bDataTransfered; // 0x298
    char pad_299[0x8f];
    static AAIPath* StaticClass();
    void EnableApparate(bool InEnable);
    void Deactivate();
    void Activate();
}; // Size: 0x328
#pragma pack(pop)
