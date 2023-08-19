#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
#pragma pack(push, 1)
class UFadeOutAsyncAction : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x18];
    static UFadeOutAsyncAction* StaticClass();
    void OnFadeComplete();
    static UFadeOutAsyncAction* FadeOut(float Duration);
}; // Size: 0x48
#pragma pack(pop)
