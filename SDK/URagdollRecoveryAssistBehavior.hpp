#pragma once
#include <cstdint>
#include "URagdollBehaviorBase.hpp"
class URagdollRecoveryAssistPlugin;
#pragma pack(push, 1)
class URagdollRecoveryAssistBehavior : public URagdollBehaviorBase {
public:
    URagdollRecoveryAssistPlugin* RunAssistPlugin; // 0xc0
    static URagdollRecoveryAssistBehavior* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
