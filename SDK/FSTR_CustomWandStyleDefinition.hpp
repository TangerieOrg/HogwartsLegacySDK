#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSTR_CustomWandStyleDefinition {
    char pad_0[0x28];
    bool BaseOption_50_78EFD28F46416C5C5C75559F9DA73FBF; // 0x28
    char pad_29[0x7];
    FString Subgroup_33_67BE5FB047644FAAD247BD84AD5BC3B0; // 0x30
    FString HandleName_54_B3C7A39143E46DBD491A5F81976C913D; // 0x40
    char pad_50[0xf0];
    bool Show_24_AAA654FB452A518DFD4FDC944FCFC7DD; // 0x140
    char pad_141[0x7];
}; // Size: 0x148
#pragma pack(pop)
