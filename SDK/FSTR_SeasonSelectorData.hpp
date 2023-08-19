#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSTR_SeasonSelectorData {
    TArray<void*> SpringMaterials_8_C06C40044DF89304322294B243CBAB40; // 0x0
    TArray<void*> SummerMaterials_10_6F6C8543448398AAE0599AA3D29A558B; // 0x10
    TArray<void*> FallMaterials_12_3DC430C145E42709526B9E97803BD9E5; // 0x20
    TArray<void*> WinterMaterials_14_3A711BF2461A671923CF9FA378FECBBC; // 0x30
    char pad_40[0x50];
}; // Size: 0x90
#pragma pack(pop)
