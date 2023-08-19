#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
#pragma pack(push, 1)
class UFadeInAsyncAction : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x18];
    static UFadeInAsyncAction* StaticClass();
    void OnFadeComplete();
    static UFadeInAsyncAction* FadeIn(float Duration);
}; // Size: 0x48
#pragma pack(pop)
