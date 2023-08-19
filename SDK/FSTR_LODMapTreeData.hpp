#pragma once
#include <cstdint>
#include "FSTR_SeasonSelectorData.hpp"
#include "FTransform.hpp"
class UStaticMesh;
#pragma pack(push, 1)
struct FSTR_LODMapTreeData {
    FTransform ComponentTransform_16_0E3E8E4F4177CBC6A30BB3AD17D7330A; // 0x0
    UStaticMesh* StaticMesh_22_69AE1F3542D16BD8BE6C2EAF28676042; // 0x30
    TArray<FTransform> InstancesTranforms_17_5E1770A84EA4726260C53F97536E51CF; // 0x38
    bool HasSeasonSelector_25_7BCD924D416B47125FEB0291D541F549; // 0x48
    char pad_49[0x7];
    FSTR_SeasonSelectorData SeasonSelectorData_21_211C91E6426C2DF256643292C62C5CE4; // 0x50
}; // Size: 0xe0
#pragma pack(pop)
