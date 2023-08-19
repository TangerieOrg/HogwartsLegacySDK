#pragma once
#include <cstdint>
#include "UEnvQueryTest.hpp"
#pragma pack(push, 1)
class UEnvQueryTest_Creature_ActorContainsGroupCoordinatedTag : public UEnvQueryTest {
public:
    FName TagID; // 0x1f8
    static UEnvQueryTest_Creature_ActorContainsGroupCoordinatedTag* StaticClass();
}; // Size: 0x200
#pragma pack(pop)
