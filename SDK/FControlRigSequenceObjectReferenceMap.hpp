#pragma once
#include <cstdint>
#include "FControlRigSequenceObjectReferences.hpp"
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FControlRigSequenceObjectReferenceMap {
    TArray<FGuid> BindingIds; // 0x0
    TArray<FControlRigSequenceObjectReferences> References; // 0x10
}; // Size: 0x20
#pragma pack(pop)
