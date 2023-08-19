#pragma once
#include <cstdint>
#include "UStationStoryPropAttachment.hpp"
#pragma pack(push, 1)
class UStationStoryProp_AttachToStation : public UStationStoryPropAttachment {
public:
    FName StationSocket; // 0x28
    static UStationStoryProp_AttachToStation* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
