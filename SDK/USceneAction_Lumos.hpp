#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_Lumos : public USceneRigObjectActionBase {
public:
    int32_t SpellLevel; // 0xa0
    bool KeepStateOnCompletion; // 0xa4
    char pad_a5[0x3];
    static USceneAction_Lumos* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
