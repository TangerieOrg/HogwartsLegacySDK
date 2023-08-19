#pragma once
#include <cstdint>
#include "UInterpTrackInst.hpp"
class UObject;
#pragma pack(push, 1)
class UInterpTrackInstProperty : public UInterpTrackInst {
public:
    char pad_28[0x20];
    UObject* PropertyOuterObjectInst; // 0x48
    static UInterpTrackInstProperty* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
