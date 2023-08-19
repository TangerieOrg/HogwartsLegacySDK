#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FOdcNavGraphImage.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
class AOdcNavmeshActor : public AActor {
public:
    TArray<FOdcNavGraphImage> NavGraphImages; // 0x248
    FVector NavmeshExtent; // 0x258
    char pad_264[0x4];
    int8_t NavGraphImagesVersion; // 0x268
    char pad_269[0x17];
    static AOdcNavmeshActor* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
