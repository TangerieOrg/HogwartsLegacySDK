#pragma once
#include <cstdint>
#include "EPerformTaskSceneRigSetting.hpp"
#include "UAIPerformTaskBase.hpp"
class ASceneRigActor;
#pragma pack(push, 1)
class UAIPerformTaskRunSceneRig : public UAIPerformTaskBase {
public:
    bool bOrientToPlayer; // 0xe0
    EPerformTaskSceneRigSetting CurrentTaskSetting; // 0xe1
    char pad_e2[0x1e];
    static UAIPerformTaskRunSceneRig* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
