#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UExecuteTask.hpp"
#pragma pack(push, 1)
class USetScale_ExecuteTask : public UExecuteTask {
public:
    FVector mNewScale; // 0x28
    bool bIsRelative; // 0x34
    char pad_35[0x3];
    static USetScale_ExecuteTask* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
