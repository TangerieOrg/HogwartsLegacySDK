#pragma once
#include <cstdint>
#include "EStandardManagedPriority.hpp"
#include "FColor.hpp"
#include "FTimeRigInputSymbol.hpp"
#include "FTimeRigOutputSymbol.hpp"
#include "USceneRigActionBase.hpp"
class UFloatProvider;
#pragma pack(push, 1)
class USceneAction_FadeOutFadeIn : public USceneRigActionBase {
public:
    EStandardManagedPriority FadePriority; // 0x88
    char pad_89[0x7];
    UFloatProvider* BlendTime; // 0x90
    FColor FadeColor; // 0x98
    char pad_9c[0x4];
    FTimeRigInputSymbol StartBlendOut; // 0xa0
    FTimeRigOutputSymbol BlendIn; // 0xb8
    FTimeRigOutputSymbol BlendOut; // 0xd0
    static USceneAction_FadeOutFadeIn* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
