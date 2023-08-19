#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FControlRigIOSettings {
    bool bUpdatePose; // 0x0
    bool bUpdateCurves; // 0x1
}; // Size: 0x2
#pragma pack(pop)
