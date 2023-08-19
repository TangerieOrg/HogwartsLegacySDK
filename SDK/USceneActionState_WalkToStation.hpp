#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class UObject;
#pragma pack(push, 1)
class USceneActionState_WalkToStation : public USceneRigObjectActionState {
public:
    char pad_70[0x10];
    static USceneActionState_WalkToStation* StaticClass();
    void OnArrived(UObject* InCaller);
}; // Size: 0x80
#pragma pack(pop)
