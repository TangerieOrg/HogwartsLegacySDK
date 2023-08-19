#pragma once
#include <cstdint>
class URagdollSensoryState;
#pragma pack(push, 1)
struct FRagdollState {
    TArray<URagdollSensoryState*> RequiredAll; // 0x0
    TArray<URagdollSensoryState*> RequiredAny; // 0x10
    TArray<URagdollSensoryState*> RequiredNone; // 0x20
}; // Size: 0x30
#pragma pack(pop)
