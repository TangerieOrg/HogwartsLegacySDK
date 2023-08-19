#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class USceneRigRegisteredActorComponent : public UActorComponent {
public:
    TArray<FName> RegisteredNames; // 0xc8
    static USceneRigRegisteredActorComponent* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
