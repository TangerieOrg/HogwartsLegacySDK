#pragma once
#include <cstdint>
#include "EExposedFieldType.hpp"
#include "FRCFieldPathInfo.hpp"
#include "FRemoteControlEntity.hpp"
#include "FSoftClassPath.hpp"
#pragma pack(push, 1)
struct FRemoteControlField : public FRemoteControlEntity {
    EExposedFieldType FieldType; // 0x98
    char pad_99[0x3];
    FName FieldName; // 0x9c
    char pad_a4[0x4];
    FRCFieldPathInfo FieldPathInfo; // 0xa8
    char pad_c0[0x50];
    FSoftClassPath OwnerClass; // 0x110
    bool bIsEditorOnly; // 0x128
    char pad_129[0x7];
}; // Size: 0x130
#pragma pack(pop)
