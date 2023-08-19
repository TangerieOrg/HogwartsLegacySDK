#pragma once
#include <cstdint>
#include "ENiagaraDebugHudFont.hpp"
#include "ENiagaraDebugHudHAlign.hpp"
#include "ENiagaraDebugHudVAlign.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FNiagaraDebugHudTextOptions {
    ENiagaraDebugHudFont Font; // 0x0
    ENiagaraDebugHudHAlign HorizontalAlignment; // 0x4
    ENiagaraDebugHudVAlign VerticalAlignment; // 0x5
    char pad_6[0x2];
    FVector2D ScreenOffset; // 0x8
}; // Size: 0x10
#pragma pack(pop)
