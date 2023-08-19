#pragma once
#include <cstdint>
#include "FRotator.hpp"
class UStaticMesh;
#pragma pack(push, 1)
struct FSTR_SelfArrangingObjects {
    TArray<UStaticMesh*> Mesh_5_CA20200D483FB46BCB0BC1AD7B79C5B3; // 0x0
    float distanceInbetweenProps_15_15D254DF4EF9AC93A1A72B8BFB971453; // 0x10
    FRotator rotation_14_04D62E8F477E4C2EE073AFB86BC5068B; // 0x14
    float scale_19_BB080E5C4050072F651B51976B8013A9; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
