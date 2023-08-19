#pragma once
#include <cstdint>
#include "EAblCameraStackContextOperation.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblCameraStackContextTask : public UAblAbilityTask {
public:
    EAblCameraStackContextOperation TaskStartOperation; // 0x70
    EAblCameraStackContextOperation TaskEndOperation; // 0x71
    char pad_72[0x2];
    FName ContextName; // 0x74
    char pad_7c[0x4];
    static UAblCameraStackContextTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
