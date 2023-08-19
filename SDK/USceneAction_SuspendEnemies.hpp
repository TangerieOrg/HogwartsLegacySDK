#pragma once
#include <cstdint>
#include "FActionParameter_FString.hpp"
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_SuspendEnemies : public USceneRigActionBase {
public:
    FActionParameter_FString EventNameParameter; // 0x88
    static USceneAction_SuspendEnemies* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
