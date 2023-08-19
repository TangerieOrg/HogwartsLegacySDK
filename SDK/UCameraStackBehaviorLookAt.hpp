#pragma once
#include <cstdint>
#include "UCameraStackBehaviorLookAtBase.hpp"
class UCameraStackSecondaryTargetGetter;
#pragma pack(push, 1)
class UCameraStackBehaviorLookAt : public UCameraStackBehaviorLookAtBase {
public:
    UCameraStackSecondaryTargetGetter* LookAtTarget; // 0x290
    static UCameraStackBehaviorLookAt* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
