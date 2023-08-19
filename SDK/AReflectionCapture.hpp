#pragma once
#include <cstdint>
#include "AActor.hpp"
class UReflectionCaptureComponent;
#pragma pack(push, 1)
class AReflectionCapture : public AActor {
public:
    UReflectionCaptureComponent* CaptureComponent; // 0x248
    static AReflectionCapture* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
