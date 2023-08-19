#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UGameThreadTasksSchedulerBPUtils : public UBlueprintFunctionLibrary {
public:
    static UGameThreadTasksSchedulerBPUtils* StaticClass();
    static void PushGameThreadTask();
}; // Size: 0x28
#pragma pack(pop)
