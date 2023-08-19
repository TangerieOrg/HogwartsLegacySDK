#pragma once
#include <cstdint>
#include "UTurnDirectionTagChooser_TargetDirectionGetter.hpp"
#pragma pack(push, 1)
class UTurnDirectionTagChooser_DesiredWorldDirectionGetter : public UTurnDirectionTagChooser_TargetDirectionGetter {
public:
    static UTurnDirectionTagChooser_DesiredWorldDirectionGetter* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
