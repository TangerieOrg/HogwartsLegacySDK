#pragma once
#include <cstdint>
#include "AActor.hpp"
struct FTransform;
#pragma pack(push, 1)
class AFieldGuidePage : public AActor {
public:
    static AFieldGuidePage* StaticClass();
    bool MoveToNextLocation(FTransform& DestinationTransform, float Speed, float DeltaTime);
}; // Size: 0x248
#pragma pack(pop)
