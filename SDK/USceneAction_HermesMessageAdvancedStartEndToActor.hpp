#pragma once
#include <cstdint>
#include "USceneAction_HermesMessageAdvancedStartEnd.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneAction_HermesMessageAdvancedStartEndToActor : public USceneAction_HermesMessageAdvancedStartEnd {
public:
    UActorProvider* ToActor; // 0xc8
    static USceneAction_HermesMessageAdvancedStartEndToActor* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
