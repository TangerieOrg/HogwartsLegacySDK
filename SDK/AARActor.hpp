#pragma once
#include <cstdint>
#include "AActor.hpp"
class UClass;
struct FGuid;
class UARComponent;
#pragma pack(push, 1)
class AARActor : public AActor {
public:
    static AARActor* StaticClass();
    UARComponent* AddARComponent(UClass* InComponentClass, FGuid& NativeID);
}; // Size: 0x248
#pragma pack(pop)
