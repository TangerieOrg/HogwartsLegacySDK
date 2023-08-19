#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_FreezeTime : public USceneRigActionBase {
public:
    bool bUnFreezeAtEnd; // 0x88
    char pad_89[0x7];
    static USceneAction_FreezeTime* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
