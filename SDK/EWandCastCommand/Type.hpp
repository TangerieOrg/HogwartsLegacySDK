#pragma once
#include <cstdint>
namespace EWandCastCommand {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    FromDodgeDirectional = 1,
    MeleeDirectional = 2,
    LightDirectional = 3,
    LightDirectionalTooClose = 4,
    HeavyDirectional = 5,
    SpecificTag = 6,
    SpecificTagTooClose = 7,
    StealthDirectional = 8,
    EWandCastCommand_MAX = 9,
};
#pragma pack(pop)
}
