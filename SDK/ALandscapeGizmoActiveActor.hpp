#pragma once
#include <cstdint>
#include "ALandscapeGizmoActor.hpp"
#pragma pack(push, 1)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor {
public:
    char pad_248[0x50];
    static ALandscapeGizmoActiveActor* StaticClass();
}; // Size: 0x298
#pragma pack(pop)
