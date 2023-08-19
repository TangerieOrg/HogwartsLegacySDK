#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_AbandonStations : public USceneRigObjectActionBase {
public:
    bool bAbortPerformTasks; // 0xa0
    bool bStopAndWait; // 0xa1
    char pad_a2[0x6];
    static USceneAction_AbandonStations* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
