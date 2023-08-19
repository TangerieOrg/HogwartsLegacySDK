#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ADocumentationActor : public AActor {
public:
    char pad_248[0x8];
    static ADocumentationActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
