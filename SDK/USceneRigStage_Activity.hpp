#pragma once
#include <cstdint>
#include "FSceneRigStage_Actor.hpp"
#include "FSceneRigStage_Transform.hpp"
#include "USceneRigStage.hpp"
#pragma pack(push, 1)
class USceneRigStage_Activity : public USceneRigStage {
public:
    char pad_180[0x10];
    FSceneRigStage_Actor Student2; // 0x190
    FSceneRigStage_Actor Student3; // 0x1a8
    FSceneRigStage_Actor Student4; // 0x1c0
    FSceneRigStage_Actor Student5; // 0x1d8
    FSceneRigStage_Actor Student6; // 0x1f0
    FSceneRigStage_Actor Student7; // 0x208
    FSceneRigStage_Actor Student8; // 0x220
    FSceneRigStage_Actor Student9; // 0x238
    FSceneRigStage_Actor Student10; // 0x250
    FSceneRigStage_Actor Student11; // 0x268
    FSceneRigStage_Actor Student12; // 0x280
    FSceneRigStage_Actor Student13; // 0x298
    FSceneRigStage_Actor Student14; // 0x2b0
    FSceneRigStage_Actor Student15; // 0x2c8
    FSceneRigStage_Transform Student1Teleport; // 0x2e0
    FSceneRigStage_Transform Student2Teleport; // 0x2f8
    FSceneRigStage_Transform Student3Teleport; // 0x310
    FSceneRigStage_Transform Student4Teleport; // 0x328
    FSceneRigStage_Transform Student5Teleport; // 0x340
    FSceneRigStage_Transform Student6Teleport; // 0x358
    FSceneRigStage_Transform Student7Teleport; // 0x370
    FSceneRigStage_Transform Student8Teleport; // 0x388
    FSceneRigStage_Transform Student9Teleport; // 0x3a0
    FSceneRigStage_Transform Student10Teleport; // 0x3b8
    FSceneRigStage_Transform Student11Teleport; // 0x3d0
    FSceneRigStage_Transform Student12Teleport; // 0x3e8
    FSceneRigStage_Transform Student13Teleport; // 0x400
    FSceneRigStage_Transform Student14Teleport; // 0x418
    FSceneRigStage_Transform Student15Teleport; // 0x430
    char pad_448[0x8];
    static USceneRigStage_Activity* StaticClass();
}; // Size: 0x450
#pragma pack(pop)
