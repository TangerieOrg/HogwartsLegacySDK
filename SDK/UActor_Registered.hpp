#pragma once
#include <cstdint>
#include "FSceneRigRegisteredActorReference.hpp"
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_Registered : public UActorProvider {
public:
    char pad_38[0x8];
    FSceneRigRegisteredActorReference ActorReference; // 0x40
    bool RequireRegistration; // 0x48
    char pad_49[0x7];
    static UActor_Registered* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
