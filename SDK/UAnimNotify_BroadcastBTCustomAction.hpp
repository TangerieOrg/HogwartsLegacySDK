#pragma once
#include <cstdint>
#include "EBTCustomActionType\Type.hpp"
#include "FBTCustomAction.hpp"
#include "UAnimNotify.hpp"
#pragma pack(push, 1)
class UAnimNotify_BroadcastBTCustomAction : public UAnimNotify {
public:
    FBTCustomAction BTCustomAction; // 0x38
    EBTCustomActionType::Type BTCustomActionType; // 0x44
    char pad_45[0x3];
    static UAnimNotify_BroadcastBTCustomAction* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
