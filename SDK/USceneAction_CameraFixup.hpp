#pragma once
#include <cstdint>
#include "ECameraFixupLayer.hpp"
#include "USceneRigObjectActionBase.hpp"
class UCameraFixupOperation;
#pragma pack(push, 1)
class USceneAction_CameraFixup : public USceneRigObjectActionBase {
public:
    ECameraFixupLayer Layer; // 0xa0
    char pad_a1[0x7];
    TArray<UCameraFixupOperation*> FixupOperations; // 0xa8
    static USceneAction_CameraFixup* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
