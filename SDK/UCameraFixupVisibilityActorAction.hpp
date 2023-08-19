#pragma once
#include <cstdint>
#include "EManagedVisibilityPriority.hpp"
#include "UCameraFixupActorAction.hpp"
#pragma pack(push, 1)
class UCameraFixupVisibilityActorAction : public UCameraFixupActorAction {
public:
    EManagedVisibilityPriority Priority; // 0x40
    bool ShouldBeHidden; // 0x41
    bool IncludeChildActors; // 0x42
    char pad_43[0x5];
    static UCameraFixupVisibilityActorAction* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
