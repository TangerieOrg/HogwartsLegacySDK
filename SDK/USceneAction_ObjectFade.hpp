#pragma once
#include <cstdint>
#include "FEasingFunction.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_ObjectFade : public USceneRigObjectActionBase {
public:
    FEasingFunction FadeCurve; // 0xa0
    char pad_ac[0x4];
    static USceneAction_ObjectFade* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
