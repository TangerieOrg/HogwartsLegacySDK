#pragma once
#include <cstdint>
#include "ATargetPoint.hpp"
#include "FSlateBrush.hpp"
class AEmitter;
#pragma pack(push, 1)
class AFlooTarget : public ATargetPoint {
public:
    char pad_248[0x20];
    FSlateBrush Icon; // 0x268
    AEmitter* AvailableEmitter; // 0x2f0
    static AFlooTarget* StaticClass();
    void SetAvailable(bool availableIn);
    void Handle_SetAvailable(bool availableIn);
    bool GetAvailable();
}; // Size: 0x2f8
#pragma pack(pop)
