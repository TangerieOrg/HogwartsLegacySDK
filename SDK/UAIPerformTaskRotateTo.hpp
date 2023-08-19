#pragma once
#include <cstdint>
#include "EEnemyAIAction.hpp"
#include "EEnemyAIActionDoneReason.hpp"
#include "UAIPerformTaskBase.hpp"
#pragma pack(push, 1)
class UAIPerformTaskRotateTo : public UAIPerformTaskBase {
public:
    static UAIPerformTaskRotateTo* StaticClass();
    void RotateToComplete(EEnemyAIAction InAction, EEnemyAIActionDoneReason InReason);
}; // Size: 0xe0
#pragma pack(pop)
