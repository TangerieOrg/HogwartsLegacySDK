#pragma once
#include <cstdint>
#include "UTurnDirectionTagChooser_TargetDirectionGetter.hpp"
#pragma pack(push, 1)
class UTurnDirectionTagChooser_DesiredDirectionGetter : public UTurnDirectionTagChooser_TargetDirectionGetter {
public:
    static UTurnDirectionTagChooser_DesiredDirectionGetter* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
