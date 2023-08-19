#pragma once
#include <cstdint>
#include "FLocalStencilEffect.hpp"
#include "ULocalStencilComponent.hpp"
#pragma pack(push, 1)
class ULocalStencilAutoStartComponent : public ULocalStencilComponent {
public:
    FLocalStencilEffect AutoStartEffect; // 0x340
    bool bStartOnBeginPlay; // 0x510
    char pad_511[0xf];
    static ULocalStencilAutoStartComponent* StaticClass();
    bool LocalStencilEffectStart();
}; // Size: 0x520
#pragma pack(pop)
