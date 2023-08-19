#pragma once
#include <cstdint>
#include "UTurnDirectionTagChooser_TargetDirectionGetter.hpp"
#pragma pack(push, 1)
class UTurnDirectionTagChooser_BlackboardDirectionGetter : public UTurnDirectionTagChooser_TargetDirectionGetter {
public:
    FName BlackboardKeyName; // 0x28
    static UTurnDirectionTagChooser_BlackboardDirectionGetter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
