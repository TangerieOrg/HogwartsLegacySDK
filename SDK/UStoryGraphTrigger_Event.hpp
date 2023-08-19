#pragma once
#include <cstdint>
#include "FTimeRigEventReference.hpp"
#include "UStoryGraphTriggerProvider.hpp"
#pragma pack(push, 1)
class UStoryGraphTrigger_Event : public UStoryGraphTriggerProvider {
public:
    FTimeRigEventReference SourceEvent; // 0x28
    FTimeRigEventReference TargetEvent; // 0x60
    static UStoryGraphTrigger_Event* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
