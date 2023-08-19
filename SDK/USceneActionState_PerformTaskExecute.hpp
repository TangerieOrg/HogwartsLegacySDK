#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class APerformTasksForAI;
#pragma pack(push, 1)
class USceneActionState_PerformTaskExecute : public USceneRigObjectActionState {
public:
    char pad_70[0x8];
    static USceneActionState_PerformTaskExecute* StaticClass();
    void OnPTComplete(APerformTasksForAI* InPTPtr);
}; // Size: 0x78
#pragma pack(pop)
